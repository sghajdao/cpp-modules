/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 13:04:37 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf == NULL)
		{
			delete rrf;
			return (0);
		}

		Bureaucrat *bureau = new Bureaucrat(149);
		if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
		rrf->beSigned(*bureau);
		rrf->execute(*bureau);
		std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
		delete rrf;
		delete bureau;
    }
    catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
}

/* int main()
{
	try
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *bureau = new Bureaucrat(146);
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
			Form *form = intern.makeForm(forms[i], "Jardin");
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
		std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
		delete bureau;
	}
	catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
} */

/* int main()
{
	try
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *brt = new Bureaucrat(25);
		if (brt == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
		Intern stg;
		Form *frm;

		frm = stg.makeForm("preesidential pardon", "Criminel");
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
		
		std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
		delete brt;
		delete frm;
	}
	catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
} */
