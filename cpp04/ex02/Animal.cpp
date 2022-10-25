/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:03:05 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:01 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}
