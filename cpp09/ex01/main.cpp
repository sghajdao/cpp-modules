/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:20 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/24 12:02:21 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
  if (ac >= 3) {
    std::cout << "Error: too many argument.\n";
    return 1;
  }
  if (ac == 2) {
    RPN rpn(av[1]);
    return 0;
  }
  else {
    std::cout << "Error: no argument.\n";
    return 1;
  }
}