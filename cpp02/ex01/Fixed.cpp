/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:35:54 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/27 10:14:47 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n_bit = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->vf = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int Constructor called" << std::endl;
    this->vf = i << this->n_bit;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float Constructor called" << std::endl;
    this->vf = roundf(f * (1 << this->n_bit));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->vf = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const{
    return (this->vf);
}

void Fixed::setRawBits( int const raw )
{
    this->vf = raw;
}

float Fixed::toFloat( void )const{
    return ((float)this->vf / (float)(1 << this->n_bit));
}

int Fixed::toInt( void )const{
    return (this->vf >> this->n_bit);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed){
    o << fixed.toFloat();
    return (o);
}
