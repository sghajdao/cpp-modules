/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:32:41 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/27 17:08:55 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
            std::string type;
    public:
            WrongAnimal();
            virtual ~WrongAnimal();
            WrongAnimal(const WrongAnimal &copy);
            WrongAnimal &operator=(const WrongAnimal &src);
            void makeSound()const;
            std::string getType()const;
};

#endif
