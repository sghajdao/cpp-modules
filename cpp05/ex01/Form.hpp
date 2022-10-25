/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:32:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/10/04 11:52:39 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int sign_grade;
        const int exec_grade;
    public:
        Form();
        Form(const std::string name);
        Form(int sign_grade, int exec_grade);
        Form(const std::string name, int sign_grade, int exec_grade);
        Form(const Form &src);
        ~Form();

        const std::string getName(void)const;
		bool getSign(void)const;
		int getSignGrade(void)const;
		int getExecGrade(void)const;
        void setExecGard(const int exec_grade);

        Form &operator=(const Form &src);
        bool beSigned(Bureaucrat &bureau);
        void checkExecGard();
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};
std::ostream	&operator<<(std::ostream &o, Form *a);

#endif
