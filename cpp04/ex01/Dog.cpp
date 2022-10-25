/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:34:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/08/03 11:02:56 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
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

Dog::Dog(const Dog &copy): Animal()
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
