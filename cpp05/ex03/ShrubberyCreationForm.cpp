/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:25:39 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/25 12:07:08 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("\'Default\'")
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form("ShrubberyCreationForm", 145, 137), target(src.target)
{
    std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
    *this = src;
}

std::string ShrubberyCreationForm::getTarget()
{
    return this->target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Detructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    std::cout << "ShrubberyCreationForm Operator called" << std::endl;
    ShrubberyCreationForm(src.target);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
    if (this->getSign() && (executor.getGrade() >= this->getExecGrade()))
    {
        std::fstream file;
        file.open(this->target + "_shrubbery ", std::ios::out);
        file << "            ,@@@@@@@," << std::endl;
        file << "    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
        file << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
        file << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
        file << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
        file << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
        file << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
        file << "    |o|        | |         | |" << std::endl;
        file << "    |.|        | |         | |" << std::endl;
        file << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
        file <<"                                                          ." << std::endl;
        file <<"                                               .         ;  " << std::endl;
        file <<"                  .              .              ;%     ;;   " << std::endl;
        file <<"                    ,           ,                :;%  %;   " << std::endl;
        file <<"                     :         ;                   :;%;'     .,   " << std::endl;
        file <<"            ,.        %;     %;            ;        %;'    ,;" << std::endl;
        file <<"              ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        file <<"               %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        file <<"                ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        file <<"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        file <<"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        file <<"                    `:%;.  :;bd%;          %;@%;'" << std::endl;
        file <<"                      `@%:.  :;%.         ;@@%;'   " << std::endl;
        file <<"                        `@%.  `;@%.      ;@@%;         " << std::endl;
        file <<"                          `@%%. `@%%    ;@@%;        " << std::endl;
        file <<"                            ;@%. :@%%  %@@%;       " << std::endl;
        file <<"                              %@bd%%%bd%%:;     " << std::endl;
        file <<"                                #@%%%%%:;;" << std::endl;
        file <<"                                %@@%%%::;" << std::endl;
        file <<"                                %@@@%(o);  . '         " << std::endl;
        file <<"                                %@@@o%;:(.,'         " << std::endl;
        file <<"                            `.. %@@@o%::;         " << std::endl;
        file <<"                               `)@@@o%::;         " << std::endl;
        file <<"                                %@@(o)::;        " << std::endl;
        file <<"                               .%@@@@%::;         " << std::endl;
        file <<"                               ;%@@@@%::;.          " << std::endl;
        file <<"                              ;%@@@@%%:;;;. " << std::endl;
        file <<"                          ...;%@@@@@%%:;;;;,.. " << std::endl;
    }
    else if (!this->getSign())
        throw Form::FormNotSigned();
    else if (executor.getGrade() < this->getExecGrade())
        throw Form::GradeTooLowException();
}
