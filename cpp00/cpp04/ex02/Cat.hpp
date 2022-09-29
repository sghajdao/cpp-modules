/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:16:24 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:42:56 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
            Brain *cerv;
    public:
            Cat();
            Cat(const Cat &copy);
            Cat &operator=(const Cat &src);
            ~Cat();
            void makeSound()const;
            void setIdeas(int index, std::string idea);
            void getIdeas();
            Animal &operator=(const Animal &src);
            std::string getType()const;
};

#endif
