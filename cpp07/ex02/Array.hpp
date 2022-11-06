/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:27:34 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/06 17:27:35 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T _array;
        unsigned int size;
    public:
        Array()
        {
            std::cout << "Default constructor called to created empty Array of size 0" << std::endl;
            this->size = 0;
            this->_array = new T[this->size];
        }
        Array(unsigned int n)
        {
            std::cout << "Constructor for an Array of size " << n << " called" << std::endl;
            this->size = n;
            this->_array = new T[this->size];
        }
        Array(const Array &src)
        {
            std::cout << "Copy Constuctor called" << std::endl;
            this->size = src.size;
			this->_array = NULL;
			*this = src;
        }
        Array &operator=(const Array &src)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			if (src.size() != 0)
			{
				this->size = src.size();
				this->_array = new T[this->size];
				for (unsigned int i = 0; i < this->size(); i++)
					this->_array[i] = src._array[i];
			}
			return (*this);
		}
};

#endif
