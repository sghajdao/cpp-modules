/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:42 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/05 14:25:23 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "One Argument required." << std::endl;
		return (1);
	}
	try
	{
		Conversion conversion(argv[1]);
		// try
		// {
		// 	Conversion copy(conversion);
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
	catch(const Conversion::ErrorException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
