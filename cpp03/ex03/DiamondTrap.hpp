/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:46:36 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 15:55:05 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
            std::string name;
    public:
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap(const DiamondTrap &copy);
            ~DiamondTrap();
            DiamondTrap &operator=(const DiamondTrap &src);
            void attack(const std::string &target);
            void whoAmI();
};

#endif
