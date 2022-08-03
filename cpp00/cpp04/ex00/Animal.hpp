/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:55:43 by sghajdao          #+#    #+#             */
/*   Updated: 2022/08/03 17:14:41 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
            std::string type;
    public:
            Animal();
            virtual ~Animal();
            Animal(const Animal &copy);
            Animal &operator=(const Animal &src);
            virtual void makeSound()const;
            std::string getType()const;
};

#endif
