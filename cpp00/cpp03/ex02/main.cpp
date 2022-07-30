/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:19 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:59:04 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	FragTrap e;
	FragTrap f("FFF");

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	e.highFivesGuys();
	e.attack("AAA");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("BBB");
	f.highFivesGuys();
	// for(int i = 0; i < 101; i++)
	// 	f.attack("FragTrap-clone");
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return (0);
}
