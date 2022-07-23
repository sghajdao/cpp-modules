/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:10:52 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:10:53 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;

    std::cout << "Please write comment Harl's level (DEBUG, INFO, WARNING or ERROR)" << std::endl;
    std::cout << "level: ";
    getline(std::cin, level);
    Harl harl(level);
}
