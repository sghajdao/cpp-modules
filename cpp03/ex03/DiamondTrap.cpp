/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:47:27 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 15:52:39 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
    std::cout << "the DiamondTrap " << name << "[ hit points(100) , energy points(50) , attack damage (30) ] \033[0;32mstart!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("'unknown'_clap_name")
{
    this->name = "'unknown'";
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
    std::cout << "the DiamondTrap 'unknown'" << "[ hit points(100) , energy points(50) , attack damage (30) ] \033[0;32mstart!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    *this = copy;
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destruction called for " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->name = src.name;
    this->hit_p = src.hit_p;
    this->energy_p = src.energy_p;
    this->attack_d = src.attack_d;
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am the DiamondTrap " << this->name << " from the ClapTrap " << ClapTrap::name << std::endl;
}
