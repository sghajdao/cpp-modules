/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:07:21 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:27:55 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 100;
    this->attack_d = 30;
    std::cout << "the FragTrap " << name << "[ hit points(100) , energy points(100) , attack damage (30) ] \033[0;32mstart!\033[0m" << std::endl;
}

FragTrap::FragTrap(): ClapTrap()
{
    this->hit_p = 100;
    this->energy_p = 100;
    this->attack_d = 30;
    std::cout << "the FragTrap " << name << "[ hit points(100) , energy points(100) , attack damage (30) ] \033[0;32mstart!\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hit_p = src.hit_p;
	this->energy_p = src.energy_p;
	this->attack_d = src.attack_d;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destruction called for " << name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTap " << name << ": high five guys!!" << std::endl;
}
