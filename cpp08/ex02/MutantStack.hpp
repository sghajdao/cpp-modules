/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:07:08 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/12 16:21:36 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack<T>(){return;}
        MutantStack<T>(const MutantStack<T> &src){*this = src;}
        ~MutantStack<T>(){return;}
        MutantStack<T> &operator=(const MutantStack<T> &src){(void)src; return *this;}
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
};

#endif
