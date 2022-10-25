/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:21 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:22 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(3, "ramses");
    if (zombie == NULL)
        return (0);
    delete[] zombie;
    zombie = zombieHorde(0, "zero");
    return (0);
}
