/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:33:26 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/27 16:33:27 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	Point a(10, 0);
    Point b(0, 0);
    Point c(0, 10);
    Point p(0, 0);

    if (bsp(a, b, c, p) == true)
        std::cout << "\033[32mTRUE\033[0m" << std::endl;
    else
        std::cout << "\033[31mFALSE\033[0m" << std::endl;
    return (0);
}
