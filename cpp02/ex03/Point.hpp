/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:16:49 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/27 14:16:50 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{
    private:
            Fixed const x;
            Fixed const y;
    public:
            Point();
            Point(const float _x, const float _y);
            Point(const Point &point);
            Point &operator=(const Point &src);
            ~Point();
            const Fixed &getX(void)const;
            const Fixed &getY(void)const; 
};

#endif
