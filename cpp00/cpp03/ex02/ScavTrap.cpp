/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:26:09 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 16:28:01 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->gate = false;
    std::cout << "the ScavTrap " << name << "[ hit points(100) , energy points(50) , attack damage (20) ] \033[0;32mstart!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(void): ClapTrap()
{
    this->hit_p = 100;
    this->energy_p = 50;
    this->attack_d = 20;
    this->gate = false;
    std::cout << "the ScavTrap " << name << "[ hit points(100) , energy points(50) , attack damage (20) ] \033[0;32mstart!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->gate = copy.gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hit_p = src.hit_p;
	this->energy_p = src.energy_p;
	this->attack_d = src.attack_d;
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destruction called for " << name << std::endl;
}

void ScavTrap::guardGate()
{
    if (gate == true)
        std::cout << "\033[33mScavTrap " << name << " is already guarding the gate.\033[0m" << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
        gate = true;
    }
}

void ScavTrap::attack(const std::string& target)
{
    if (energy_p > 0 && hit_p > 0)
    {
        std::cout << "ScavTrap " + name + " attacks " + target + " causing " << attack_d << " points of damage!" << std::endl;
        energy_p--;
    }
    else if (hit_p == 0)
        std::cout << "\033[31mScavTrap " << name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
    else
        std::cout << "\033[31mScavTrap " << name << " is not able to attack " << target << ", because he has not enough energy points.\033[0m" << std::endl;
}
