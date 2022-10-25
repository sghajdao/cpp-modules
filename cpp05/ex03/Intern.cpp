/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:26 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 12:52:12 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default onstructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)const
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int res;
	int i = 0;
	for(i = 0; i < 3; i++)
	{
		if ((res = name.compare(forms[i])) == 0)
			break;
	}
	if (res != 0)
	{
		std::cout << "There is no form whit this name!" << std::endl;
		return (NULL);
	}
	Form *form = new Form(name);
	switch(i){
		case 0 : std::cout << "Intern creates ShrubberyCreationForm\n"; form = new ShrubberyCreationForm(target);break;
		case 1 : std::cout << "Intern creates RobotomyRequestForm\n"; form = new RobotomyRequestForm(target);break;
		case 2 : std::cout << "Intern creates PresidentialPardonForm\n"; form = new PresidentialPardonForm(target);break;
	}
	if (form == NULL)
	{
		perror("Allocation failed");
        exit(1);
	}
	return form;
}
