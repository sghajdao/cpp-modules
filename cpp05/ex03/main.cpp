/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 14:55:17 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/* int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Intern someRandomIntern;
	Form* rrf;
	Bureaucrat *bureau;
    try
    {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf == NULL)
		{
			delete rrf;
			return (0);
		}

		bureau = new Bureaucrat(149);
		if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
		rrf->beSigned(*bureau);
		rrf->execute(*bureau);
    }
    catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
	std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
	delete rrf;
	delete bureau;
} */

/* int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat *bureau;
	Form *form;
	try
	{
		bureau = new Bureaucrat(146);
		if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
		Intern intern;
		
		std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		
		for(int i = 0; i < 3; i++)
		{
			std::cout << "\033[34mConstructing\033[0m" << std::endl;
			form = intern.makeForm(forms[i], "Formular");
			if (form == NULL)
			{
				std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
				delete bureau;
				delete form;
				return (0);
			}
			form->beSigned(*bureau);
			form->execute(*bureau);
			std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
			delete form;
		}
	}
	catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
	std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
	delete bureau;
} */

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat *brt;
	Intern stg;
	Form *frm;
	try
	{
		brt = new Bureaucrat(25);
		if (brt == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}

		frm = stg.makeForm("presidential pardon", "Criminel");
		if (frm == NULL)
		{
			std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
			delete frm;
			delete brt;
			return (0);
		}
		frm->beSigned(*brt);
		frm->execute(*brt);
		for(int i = 0; i <= 21; i++)
			brt->increment();
		
		std::cout << brt << std::endl;
		frm->execute(*brt);
		
	}
	catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
	std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
	delete brt;
	delete frm;
}
