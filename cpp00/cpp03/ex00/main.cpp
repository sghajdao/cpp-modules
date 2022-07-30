/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:19 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:51:50 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("AAA");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.attack("BBB");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("CCC");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("DDD");
	b.beRepaired(3);
	return (0);
}
