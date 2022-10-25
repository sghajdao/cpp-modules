/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:34:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/31 14:56:34 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called for Dog" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy constructor called for Dog" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Operator called for Dog" << std::endl;
    this->type = src.type;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "*** WOOF ***" << std::endl;
}
