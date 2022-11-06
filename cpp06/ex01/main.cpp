/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:31 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/05 14:45:02 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "structs.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data		*ptr = new Data;
	if (ptr == NULL)
	{
		perror("Allocation failed");
		exit(1);
	}
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->data = "Hello world!";
	raw = serialize(ptr);
	// std::cout << ptr << std::endl;  // The memory address held by ptr
	// std::cout << raw << std::endl;
	new_ptr = deserialize(raw);
	std::cout << "new_ptr->data = " << new_ptr->data << std::endl;
	delete ptr;
}
