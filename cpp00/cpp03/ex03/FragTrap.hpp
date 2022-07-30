/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:06:50 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/30 14:51:48 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
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
