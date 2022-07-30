/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:06:50 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/29 17:15:35 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
            FragTrap(std::string name);
            FragTrap();
            ~FragTrap();
            FragTrap &operator=(const FragTrap &src);
            FragTrap(const FragTrap &copy);
            void highFivesGuys(void);
};

#endif
