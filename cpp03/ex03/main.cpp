/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:19 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 17:08:00 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("BBB");
	DiamondTrap c(a);

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.whoAmI();
	a.attack("CCC");
	b.whoAmI();
	b.attack("AAA");
	c.whoAmI();
	a.takeDamage(20);
	c.takeDamage(100);
	a.beRepaired(10);
	c.beRepaired(5);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return (0);
}
