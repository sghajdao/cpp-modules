/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:16:28 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:42:36 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Default constructor called for Cat" << std::endl;
    this->type = "Cat";
    this->cerv = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
    delete cerv;
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

Animal &Cat::operator=(const Animal &src)
{
    std::cout << "Animal operator called for Cat" << std::endl;
    this->type = src.getType();
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "*** MEEEOW ***" << std::endl;
}

void    Cat::setIdeas(int index, std::string idea)
{
    this->cerv->setIdea(index, idea);
}

void Cat::getIdeas()
{
    for(int i = 0; i <= 100; i++)
    {
        if (this->cerv->getIdea(i).length() > 0)
            std::cout << "Idea " << i << ": " << this->cerv->getIdea(i) << std::endl;
    }
}

std::string Cat::getType()const
{
    return (this->type);
}
