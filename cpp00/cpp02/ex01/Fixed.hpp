/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:35:52 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/27 17:55:30 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
            int vf;
            const static int n_bit;
    public:
            Fixed();
            Fixed(const int i);
            Fixed(const float f);
            Fixed(const Fixed &copy);
            Fixed &operator=(const Fixed &src);
            ~Fixed();
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif
