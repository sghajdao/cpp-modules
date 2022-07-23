/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:10:11 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:10:12 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
            std::string name;
            Weapon *weapon;
    public:
            HumanB(std::string name);
            ~HumanB();
            void attack();
            void setWeapon(Weapon &weapon);
};

#endif
