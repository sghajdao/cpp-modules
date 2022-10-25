/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:22:16 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 12:23:42 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *bureau = new Bureaucrat(149);
        if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << bureau << std::endl;
        ShrubberyCreationForm *s = new ShrubberyCreationForm("jardin");
        if (s == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        s->beSigned(*bureau);
        s->execute(*bureau);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete bureau;
        delete s;
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
        Bureaucrat *bureau = new Bureaucrat(149);
        if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << bureau << std::endl;
        RobotomyRequestForm *s = new RobotomyRequestForm("robot");
        if (s == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        s->beSigned(*bureau);
        for(int i = 0; i<=10; i++)
            s->execute(*bureau);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete bureau;
        delete s;
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
        Bureaucrat *bureau = new Bureaucrat(149);
        if (bureau == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << bureau << std::endl;
        PresidentialPardonForm *p = new PresidentialPardonForm("28B");
        if (p == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        p->beSigned(*bureau);
        p->execute(*bureau);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete bureau;
        delete p;
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
        Bureaucrat *bureau[3];
        ShrubberyCreationForm *s = new ShrubberyCreationForm("Jardin");
        if (s == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        RobotomyRequestForm *f = new RobotomyRequestForm("Robot");
        if (f == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        PresidentialPardonForm *p = new PresidentialPardonForm("28B");
        if (p == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        
        bureau[0] = new Bureaucrat(135);
        bureau[1] = new Bureaucrat(149);
        bureau[2] = new Bureaucrat(10);
        for(int i = 0; i < 3; i++)
            std::cout << bureau[i] << std::endl;
        
        f->beSigned(*bureau[1]);
        p->beSigned(*bureau[2]);
        
        for(int i = 0; i <= 10; i++)
            bureau[0]->decriment();
        
        s->beSigned(*bureau[0]);
        s->execute(*bureau[0]);
        f->beSigned(*bureau[1]);
        f->execute(*bureau[1]);
        p->beSigned(*bureau[2]);
        p->execute(*bureau[2]);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        for(int i = 0; i < 3; i++)
            delete bureau[i];
        delete s;
        delete f;
        delete p;
    }
    catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
} */