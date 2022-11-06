/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:03:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/06 17:03:33 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void interest(int &i)
{
    if (i <= 0)
    {
        std::cout << "unacceptable number" << std::endl;
    }
    else
    {
        float p;
        p = (i * 1.5) / 100;
        std::cout << "interest rate of " << i << " is " << p << std::endl;
    }
}

void upper(char &c)
{
    c = toupper(c);
    std::cout << c;
}

int main()
{
    int array[] = {100, 0, 500, 20};
    char string[] = "abcDEFjhI";

    std::cout << "\033[34mTesting 1\033[0m" << std::endl;
    iter(array, 4, interest);

    std::cout << "\033[34mTesting 2\033[0m" << std::endl;
    iter(string, 9, upper);
    std::cout << std::endl;
}
