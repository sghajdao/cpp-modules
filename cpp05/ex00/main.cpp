/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:44:28 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 14:37:11 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *a;
    try
    {
        std::cout << "\033[34mConstructing\033[0m" << std::endl;
        a = new Bureaucrat("saad", 2);
        if (a == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << a << std::endl;
        a->increment();
        //a->increment();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete a;
}

/* int main()
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat *t[3];
    try
    {
        for(int i = 0; i <= 2; i++){
            if (i == 0)
                t[i] = new Bureaucrat(140);
            if (i == 1)
                t[i] = new Bureaucrat(10);
            if (i == 2)
            {
                t[i] = new Bureaucrat();
                //t[i] = new Bureaucrat(0);  //this initialization will throw GradeTooHighException
            }
            if (t[i] == NULL)
            {
                perror("Allocation failed");
                exit(1);
            }
            std::cout << t[i] << std::endl;
        }
        for(int i = 0; i <= 11; i++){
            t[0]->decriment();
            t[1]->increment();
            t[2]->increment();
        }
    }
    catch(std::exception &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    for(int i = 0; i <= 2; i++)
        delete t[i];
} */

/* int main()
{
     std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat *a;
    Bureaucrat *b;
    try
    {
        a = new Bureaucrat("abc", 149);
        if (a == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << a << std::endl;
        b = new Bureaucrat(*a);
        std::cout << b << std::endl;
        a->decriment();
        a->decriment();
        b->increment();
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "\033[33m" << e.what() << "\033[0m" << std::endl;
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete a;
    delete b;
} */
