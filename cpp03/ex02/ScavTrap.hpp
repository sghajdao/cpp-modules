/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:26:13 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/29 17:15:31 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
            bool gate;
    public:
            ScavTrap(std::string name);
            ScavTrap(void);
            ScavTrap &operator=(const ScavTrap &src);
            ScavTrap(const ScavTrap &copy);
            ~ScavTrap();
            void guardGate();
            void attack(const std::string& target);
};

#endif
