/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:30 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/25 11:53:01 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string convertCharPointerToString(char** charArray, int size)
{
    std::string result;

    for (int i = 1; i < size; i++)
    {
        result += charArray[i];
        result += " ";
    }

    return result;
}

int main(int ac, char **av){
    std::string in = convertCharPointerToString(av, ac);
    if (ac > 2)
        PmergeMe pmg(in);
    else {
        std::cout << "Error\n";
        return 1;
    }
}


/******* CHECKER *******/

// int main(int ac, char **av){
    
//     (void)ac;
//     int i = 0;
//     std::vector<int> v;
//     while (av[i]) {
//         v.push_back(atoi(av[i]));
//         i++;
//     }
//     std::vector<int>::iterator it = v.begin() + 1;
//     for(; it < v.end(); it++) {
//         std::vector<int>::iterator it2 = v.begin();
//         for(; it2 < it; it2++) {
//             if (*it2 > *it) {
//                 std::cout << "FALSE\n";
//                 return 1;
//             }
//         }
//     }
//     std::cout << "TRUE\n";
//     return 0;
// }