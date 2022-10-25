/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:21:42 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:10 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "Constructor called for Brain" << std::endl;
    for(int i = 0; i <= 100; i++)
        this->ideas[i] = ideas[i];
}

Brain::~Brain()
{
    std::cout << "Destructor called for Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Copy Constructor called for Brain" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Operator called for Brain" << std::endl;
    for(int i = 0; i <= 100; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}

void    Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
    return ideas[index];
}
