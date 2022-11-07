/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:10:48 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/07 15:13:58 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "\033[34mTesting 1\033[0m" << std::endl;
    Array<int> table(10);
    std::cout << "array content:" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        table[i] = i;
        std::cout << table[i] << " ";
    }
    std::cout << std::endl;
/*-------------------------------------------------------------------------*/
    std::cout << "\033[34mTesting 2\033[0m" << std::endl;
    Array<int> *array = new Array<int>(2);
    array[0] = 2;
    array[0][0] = 0;
    array[0][1] = 1;
    array[1] = 5;
    std::cout << "array1 content:" << std::endl;
    for(int i = 0; i < 2; i++)
        std::cout << array[0][i] << " ";
    std::cout << std::endl;
    std::cout << "array1 content:" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        array[1][i] = i;
        std::cout << array[1][i] << " ";
    }
    std::cout << std::endl;
/*-------------------------------------------------------------------------*/
    Array<char> *string = new Array<char>(2);
    std::cout << "\033[34mTesting 3\033[0m" << std::endl;
    string[0] = 5;
    string[0][0] = 'h';
    string[0][1] = 'e';
    string[0][2] = 'l';
    string[0][3] = 'l';
    string[0][4] = 'o';
    string[1] = 5;
    string[1][0] = 'w';
    string[1][1] = 'o';
    string[1][2] = 'r';
    string[1][3] = 'l';
    string[1][4] = 'd';
    std::cout << "arrays content:" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        std::cout << string[0][i];
    }
    std::cout << " ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << string[1][i];
    }
    std::cout << std::endl;
}
