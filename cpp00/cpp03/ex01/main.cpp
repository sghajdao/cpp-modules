/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:19 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:59:40 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ScavTrap c;
	ScavTrap d("DDD");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	c.attack("AAA");
	// for (int i = 0; i < 50; i++)
	// 	c.attack("CloneTrap");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("BBB");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("CCC");
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return (0);
}
