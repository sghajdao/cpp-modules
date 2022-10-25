/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:30 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:31 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
    {
        std::cout << "A Horde can not contain less than 1 Zombie." << std::endl;
        return (NULL);
    }

    Zombie *zombie = new Zombie[N];

    for(int i = 0; i < (N ); i++)
    {
        zombie[i].setName(name);
        zombie[i].announce();
    }
    return (&zombie[0]);
}
