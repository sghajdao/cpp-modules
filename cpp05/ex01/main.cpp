/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 14:41:49 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* int main()
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat *bureau;
    Form *formule;
    try
    {
        bureau = new Bureaucrat("bureau", 1);
        if (bureau == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << bureau << std::endl;
        formule = new Form("form", 2, 1);
        if (formule == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << formule << std::endl;
        formule->beSigned(*bureau);
        bureau->signForm(*formule);
    }
    catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete bureau;
    delete formule;
} */

int main()
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat *b;
    Form *f;
    try
    {
        b = new Bureaucrat(140);
        if (b == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << b << std::endl;
        f = new Form(2, 1);
        if (f == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        //f = new Form(2, 0);   //will throw GradeTooHighException
        std::cout << f << std::endl;
        f->beSigned(*b);
        b->signForm(*f);
    }
    catch(std::exception& e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete b;
    delete f;
    
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat *b1;
    Form *f1;
    try
    {
        b1 = new Bureaucrat(140);
        if (b1 == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << b1 << std::endl;
        f1 = new Form(2, 1);
        if (f1 == NULL)
		{
			perror("Allocation failed");
    	    exit(1);
		}
        std::cout << f1 << std::endl;
        for(int i = 0; i <= 10; i++){
            b1->decriment();
        }
        f1->beSigned(*b);
        b1->signForm(*f);
    }
    catch(std::exception& e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete b1;
    delete f1;
}
