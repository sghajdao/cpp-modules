/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:23:59 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/24 17:24:00 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("\'Default\'")
{
    std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form("PresidentialPardonForm", 25, 5), target(src.target)
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    *this = src;
}

std::string PresidentialPardonForm::getTarget()
{
    return this->target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Detructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    std::cout << "PresidentialPardonForm Operator called" << std::endl;
    PresidentialPardonForm(src.target);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    if (this->getSign() && (executor.getGrade() >= this->getExecGrade()))
    {
        std::cout << this->target << " has been pardoned by Mr.Zaphod Beeblebrox" << std::endl;
    }
    else if (!this->getSign())
        throw Form::FormNotSigned();
    else if (executor.getGrade() < this->getExecGrade())
        throw Form::GradeTooLowException();
}
