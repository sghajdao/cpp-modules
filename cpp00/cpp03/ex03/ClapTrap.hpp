/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:23:12 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 15:41:35 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
            std::string name;
            int hit_p;
            int energy_p;
            int attack_d;
    public:
            ClapTrap(std::string name);
            ClapTrap(void);
            ClapTrap(const ClapTrap &copy);
            ~ClapTrap(void);
            ClapTrap &operator=(const ClapTrap &src);
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
};

#endif
