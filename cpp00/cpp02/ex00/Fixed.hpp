/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:35:52 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/27 08:53:53 by sghajdao         ###   ########.fr       */
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
            Fixed(const Fixed &copy);
            Fixed &operator=(const Fixed &src);
            ~Fixed();
            int getRawBits( void ) const;
            void setRawBits( int const raw );
};

#endif
