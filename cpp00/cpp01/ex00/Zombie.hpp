/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:14 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:15 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
            std::string name;
    public:
            Zombie(std::string name);
            ~Zombie(void);
            void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
