/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:38:06 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/31 18:55:41 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "Default constructor called for WrongCat" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "Copy constructor called for WrongCat" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "Operator called for WrongCat" << std::endl;
    this->type = src.type;
    return *this;
}

void WrongCat::makeSound()const
{
    std::cout << "*** WRONGCAT SOUND ***" << std::endl;
}
