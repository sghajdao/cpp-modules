/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:30:54 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:33 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
            Brain *cerv;
    public:
            Dog();
            ~Dog();
            Dog(const Dog &copy);
            Dog &operator=(const Dog &src);
            void makeSound()const;
            void setIdeas(int index, std::string idea);
            void getIdeas();
            virtual Animal &operator=(const Animal &src);
            std::string getType()const;
};

#endif
