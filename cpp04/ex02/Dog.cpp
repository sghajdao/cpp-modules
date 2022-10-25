/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:34:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:36 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called for Dog" << std::endl;
    this->type = "Dog";
    this->cerv = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
    delete cerv;
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

Animal &Dog::operator=(const Animal &src)
{
    std::cout << "Animal operator called for Dog" << std::endl;
    this->type = src.getType();
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "*** WOOF ***" << std::endl;
}

void    Dog::setIdeas(int index, std::string idea)
{
    this->cerv->setIdea(index, idea);
}

void Dog::getIdeas()
{
    for(int i = 0; i <= 100; i++)
    {
        if (this->cerv->getIdea(i).length() > 0)
            std::cout << "Idea " << i << ": " << this->cerv->getIdea(i) << std::endl;
    }
}

std::string Dog::getType()const
{
    return (this->type);
}
