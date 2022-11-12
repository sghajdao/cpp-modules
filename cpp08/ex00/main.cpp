/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:47:35 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/12 16:15:45 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>    vect;
	std::vector<int>::iterator  it;

	for (int i = 1; i < 59; i += 2)
		vect.push_back(i);
	it = easyfind(vect, 43);
	if (it != vect.end())
		std::cout << "iterator: " << *it << std::endl;
	else
		std::cout << "iterator reached the end of container" << std::endl;
	it = easyfind(vect, 42);
	if (it != vect.end())
		std::cout << "iterator: " << *it << std::endl;
	else
		std::cout << "iterator reached the end of container" << std::endl;
}

/* int main()
{
	std::vector<int>	vect;
	std::vector<int>::iterator	it;
	
	vect.push_back(-10);
	vect.push_back(10);
	vect.push_back(0);
	vect.push_back(1);
	vect.push_back(22);
	
	it = easyfind(vect, 5);
	std::cout << "last element: " << *(vect.end() - 1) << std::endl;
	std::cout << "after end position: " << *it << std::endl;
} */
