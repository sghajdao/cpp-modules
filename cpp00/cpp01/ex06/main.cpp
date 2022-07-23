/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:11:05 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:11:06 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Please write comment Harl's level (DEBUG, INFO, WARNING or ERROR)." << std::endl;
        return (1);
    }
    Harl harl(av[1]);
    return (0);
}
