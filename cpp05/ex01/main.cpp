/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 12:12:04 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    try
    {
        Bureaucrat *bureau = new Bureaucrat("bureau", 1);
        if (bureau == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << bureau << std::endl;
        Form *formule = new Form("form", 2, 1);
        if (formule == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << formule << std::endl;
        formule->beSigned(*bureau);
        bureau->signForm(*formule);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete bureau;
        delete formule;
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
        Bureaucrat *b = new Bureaucrat(140);
        if (b == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << b << std::endl;
        Form *f = new Form(2, 1);
        if (f == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        //Form *f = new Form(2, 0);   //will throw GradeTooHighException
        std::cout << f << std::endl;
        f->beSigned(*b);
        b->signForm(*f);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete b;
        delete f;
    }
    catch(std::exception& e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    
    try
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        Bureaucrat *b = new Bureaucrat(140);
        if (b == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << b << std::endl;
        Form *f = new Form(2, 1);
        if (f == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << f << std::endl;
        for(int i = 0; i <= 10; i++){
            b->decriment();
        }
        f->beSigned(*b);
        b->signForm(*f);
        std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
        delete b;
        delete f;
    }
    catch(std::exception& e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
} */
