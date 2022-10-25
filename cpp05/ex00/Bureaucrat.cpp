/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:58:18 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/03 13:10:31 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "\'undefined\'";
    this->setGrade(150);
}

Bureaucrat::Bureaucrat(const std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    this->setGrade(150);
}

Bureaucrat::Bureaucrat(int grade)
{
    std::cout << "Grade constructor called" << std::endl;
    this->name = "\'undefined\'";
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Operator called" << std::endl;
    this->setGrade(src.getGrade());
    return *this;
}

void Bureaucrat::increment()
{
    std::cout << "incrementation..." << std::endl;
    this->setGrade(this->grade - 1);
}

void Bureaucrat::decriment()
{
    std::cout << "decrimentation..." << std::endl;
    this->setGrade(this->grade + 1);
}

const std::string Bureaucrat::getName()const
{
    return (this->name);
}

int Bureaucrat::getGrade()const
{
    return (this->grade);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high");
};

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low");
};

std::ostream &operator<<(std::ostream &o, Bureaucrat *a)
{
    o << "Bureaucrat " << a->getName() << " with grade: " << a->getGrade();
	return (o);
}
