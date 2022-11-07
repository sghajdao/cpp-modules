/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:27:34 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/07 15:35:22 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array()
        {
            std::cout << "Default constructor called to created empty Array of size 0" << std::endl;
            this->_size = 0;
            this->_array = new T[this->_size];
        }
        Array(unsigned int n)
        {
            std::cout << "Constructor for an Array of size " << n << " called" << std::endl;
            this->_size = n;
            this->_array = new T[this->_size];
        }
        Array(const Array &src)
        {
            std::cout << "Copy Constuctor called" << std::endl;
			*this = src;
        }
        Array &operator=(const Array &src)
		{
			if (src._size != 0)
			{
				this->_size = src.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = src._array[i];
			}
			return (*this);
		}
        T &operator[](const unsigned int index)
        {
            if (index >= this->_size)
                throw std::overflow_error("Index out of bounds");
            return this->_array[index];
        }
        unsigned int size(void)const
        {
            return this->_size;
        }
};

#endif
