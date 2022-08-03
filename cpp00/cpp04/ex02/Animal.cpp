/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:03:05 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/31 15:18:51 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called for Animal" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor called for Animal" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Operator called for Animal" << std::endl;
    this->type = src.type;
    return *this;
}

void Animal::makeSound()const
{
    std::cout << "*** ANIMAL SOUND ***" << std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}
