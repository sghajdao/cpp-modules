/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/24 17:19:03 by sghajdao         ###   ########.fr       */
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
        std::cout << bureau << std::endl;
        ShrubberyCreationForm *s = new ShrubberyCreationForm("jardin");
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
        std::cout << bureau << std::endl;
        RobotomyRequestForm *s = new RobotomyRequestForm("robot");
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
        std::cout << bureau << std::endl;
        PresidentialPardonForm *p = new PresidentialPardonForm("28B");
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
        RobotomyRequestForm *f = new RobotomyRequestForm("Robot");
        PresidentialPardonForm *p = new PresidentialPardonForm("28B");
        
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
