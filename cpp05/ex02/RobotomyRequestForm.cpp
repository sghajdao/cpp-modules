/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:24:09 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 14:45:38 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), target("\'Default\'")
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form("RobotomyRequestForm", 72, 45), target(src.target)
{
    std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
    *this = src;
}

std::string RobotomyRequestForm::getTarget()
{
    return this->target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    std::cout << "RobotomyRequestForm Operator called" << std::endl;
    RobotomyRequestForm(src.target);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
    if (this->getSign() && (executor.getGrade() >= this->getExecGrade()))
    {
        if (std::rand() % 2)
            std::cout << "BBBBRRRRRRRRRRRRRRRRR...\n" << this->target << " has been successfully robotomized" << std::endl;
        else
            std::cout << this->target << " failed to be robotomized" << std::endl;
    }
    else if (!this->getSign())
        throw Form::FormNotSigned();
    else if (executor.getGrade() < this->getExecGrade())
        throw Form::GradeTooLowException();
}
