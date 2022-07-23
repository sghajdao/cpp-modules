/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:38 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:39 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr = &string;
    std::string &stringRef = string;

    std::cout << "The memory address of the string variable is: " << &string << std::endl;
    std::cout << "The memory address held by stringPTR is: " << stringPtr << std::endl;
    std::cout << "The memory address held by stringREF: " << &string << std::endl << std::endl;

    std::cout << "The value of the string variable is: " << string << std::endl;
    std::cout << "The value pointed to by stringPTR is: " << *stringPtr << std::endl;
    std::cout << "The value pointed to by stringREF is: " << stringRef << std::endl;
}