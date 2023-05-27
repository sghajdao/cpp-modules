/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:16 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/24 12:02:17 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	checkArgs(int ac, char **av) {
	std::fstream ifs;
	struct stat info;

	if (ac >= 3)
		throw std::invalid_argument("Error: too many argument.");
	ifs.open(av[1], std::fstream::in);
	if (!(ifs.is_open()))
		throw std::invalid_argument("Error: could not open file.");
	else
		ifs.close();
	lstat(av[1], &info);
	if (S_ISDIR(info.st_mode) || S_ISLNK(info.st_mode))
		throw std::invalid_argument("Error: argument is not a file.");
	return ;
}

int main(int ac, char **av) {
	try {
		checkArgs(ac, av);
		BitcoinExchange("data.csv", av[1]);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}