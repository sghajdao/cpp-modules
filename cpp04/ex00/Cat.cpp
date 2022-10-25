/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:16:28 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/31 18:55:58 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Default constructor called for Cat" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Copy constructor called for Cat" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Operator called for Cat" << std::endl;
    this->type = src.type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "*** MEEEOW ***" << std::endl;
}
