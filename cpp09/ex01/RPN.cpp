/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:23 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/26 16:13:05 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *input) {
    std::string str = input;
    if (checkInput(str) == true)
    {
        std::cout << resault << std::endl;
    }
    else
        std::cout << "Error\n";
}

RPN::~RPN() {}

RPN::RPN(RPN const &src) {
    *this = src;
}

RPN RPN::operator=(RPN const &src) {
    this->pile = src.pile;
    return *this;
}

bool RPN::checkInput(std::string input) {
    std::istringstream iss(input);
    std::string token;

    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (pile.size() < 2) {
                return false;
            }
            long b = pile.top();
            pile.pop();
            long a = pile.top();
            pile.pop();

            if (token == "+") {
                pile.push(a + b);
            } else if (token == "-") {
                pile.push(a - b);
            } else if (token == "*") {
                pile.push(a * b);
            } else if (token == "/") {
                if (b == 0) {
                    return false;
                }
                pile.push(a / b);
            }
        } else {
            long num;
            try {
                num = std::stol(token);
            } catch (const std::exception&) {
                return false;
            }

            if (num > 9) {
                return false;
            }
            pile.push(num);
        }
    }
    resault = pile.top();
    return pile.size() == 1;
}
