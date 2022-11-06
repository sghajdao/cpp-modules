/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:01 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/05 14:48:08 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	selected = rand() % 3;

	if (selected == 0)
		return new A();
	else if (selected == 1)
		return new B();
	else if (selected == 2)
		return new C();
	else
		throw new std::exception();
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

void	identify(Base *p)
{
	A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base	*base;

	std::cout << "Identifying with pointers" << std::endl;

	for(int i = 0; i <= 8; i++)
	{
		base = generate();
		if (base == NULL)
		{
			perror("Allocation failed");
			exit(1);
		}
		identify(base);
		delete base;
	}

	std::cout << std::endl << "Identifying with references" << std::endl
		<< std::endl;

	for(int i = 0; i <= 8; i++)
	{
		base = generate();
		if (base == NULL)
		{
			perror("Allocation failed");
			exit(1);
		}
		identify(*base);
		delete base;
	}
}
