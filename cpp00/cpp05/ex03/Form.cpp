/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:47:46 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/24 13:40:34 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("\'undefined\'"), sign(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string name): name(name), sign(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Form name Constructor called" << std::endl;
}

Form::Form(int sign_grade, int exec_grade): name("\'undefined\'"), sign(false), sign_grade(sign_grade), exec_grade(exec_grade)
{
    std::cout << "Form grades Constructor called" << std::endl;
    this->checkExecGard();
}

Form::Form(const std::string name, int sign_grade, int exec_grade): name(name), sign(false), sign_grade(sign_grade), exec_grade(exec_grade)
{
    std::cout << "Form Constructor called" << std::endl;
    this->checkExecGard();
}

Form::Form(const Form &src): name(src.getName()), sign(false), sign_grade(src.getSignGrade()), exec_grade(getExecGrade())
{
    std::cout << "Form copy Constructor called" << std::endl;
    *this = src;
    this->checkExecGard();
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
    std::cout << "Form Operator called" << std::endl;
    Form(src.getName(), src.getSign(), src.getExecGrade());
    return *this;
}

void Form::checkExecGard()
{
    if (this->exec_grade < 1 || this->sign_grade < 1)
        throw Form::GradeTooHighException();
    if (this->exec_grade > 150 || this->sign_grade > 150)
        throw Form::GradeTooLowException();
}

const std::string Form::getName(void)const
{
    return this->name;
}

bool Form::getSign(void)const
{
    return this->sign;
}

int Form::getSignGrade(void)const
{
    return this->sign_grade;
}

int Form::getExecGrade(void)const
{
    return this->exec_grade;
}

bool Form::beSigned(Bureaucrat &bureau)
{
    if (bureau.getGrade() >= this->getSignGrade())
    {
        this->sign = true;
        return true;
    }
    else
    {
        this->sign = false;
        return false;
    }
}

void Form::execute(Bureaucrat const &executor)const
{
	(void)executor;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high");
};

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low");
};

const char *Form::FormNotSigned::what(void) const throw()
{
    return ("Form not signed");
};

std::ostream &operator<<(std::ostream &o, Form *a)
{
    o << "Bureaucrat " << a->getName() << " with sign grade: " << a->getSignGrade()
    << " and execution grade: " << a->getExecGrade();
	return (o);
}
