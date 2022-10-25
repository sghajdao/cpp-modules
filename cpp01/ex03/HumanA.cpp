/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:53 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:54 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon):weapon(weapon)
{
    this->weapon = weapon;
    this->name = _name;
    std::cout << this->name << " joined the battlefield and grabbed a " << this->weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " died." << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
