/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:33:10 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/27 17:09:06 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor called for WrongAnimal" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy constructor called for WrongAnimal" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "Operator called for WrongAnimal" << std::endl;
    this->type = src.type;
    return *this;
}

void WrongAnimal::makeSound()const
{
    std::cout << "*** WRONGANIMAL SOUND ***" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->type);
}
