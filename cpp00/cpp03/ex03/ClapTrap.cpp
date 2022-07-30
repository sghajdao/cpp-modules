/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:17 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:05:54 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hit_p(10), energy_p(10), attack_d(0)
{
    std::cout << this->name << " [ hit points(10) , energy points(10) , attack damage (0) ] \033[0;32mstart!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(void): name("'unknown'"), hit_p(10), energy_p(10), attack_d(0)
{
    std::cout << this->name << " [ hit points(10) , energy points(10) , attack damage (0) ] \033[0;32mstart!\033[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hit_p = src.hit_p;
	this->energy_p = src.energy_p;
	this->attack_d = src.attack_d;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destruction called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_p > 0 && hit_p > 0)
    {
        std::cout << "ClapTrap " + name + " attacks " + target + " causing " << attack_d << " points of damage!" << std::endl;
        energy_p--;
    }
    else if (hit_p == 0)
        std::cout << "\033[31mClapTrap " << name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
    else
        std::cout << "\033[31mClapTrap " << name << " is not able to attack " << target << ", because he has not enough energy points.\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_p >= (int)amount)
    {
        hit_p -= (int)amount;
        std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hit points, he now has " << hit_p << " hit points." << std::endl;
    }
    else if (hit_p < (int)amount && hit_p > 0)
    {
        hit_p = 0;
        std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hit points, he now has " << hit_p << " hit points." << std::endl;
    }
    else
        std::cout << "\033[33mClapTrap " << name << " is already dead, stop beating it.\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_p > 0 && hit_p > 0 && hit_p < 10)
    {
        if (hit_p + amount > 10)
            hit_p = 10;
        else
            hit_p += amount;
        energy_p--;
        std::cout << "ClapTrap " << name << " repaired itself and gained " << amount << " hit point." << std::endl;
    }
    else if (hit_p == 0)
        std::cout << "\033[31mClapTrap " << name << " is not able to repair itself, because he doesn't have enough energy points..\033[0m" << std::endl;
    else if (energy_p == 0)
        std::cout << "\033[31mClapTrap " << name << " is not able to repair itself, because he doesn't have enough hit points.\033[0m" << std::endl;
    else
        std::cout << "\033[33mClapTrap " << name << " can't be repaired to have more than 10 hit points.\033[0m" << std::endl;
}
