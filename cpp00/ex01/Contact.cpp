/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:22:44 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/21 16:09:39 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};


Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact()
{
	return;
}

bool	Contact::set_contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
		while ( !(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "\033[31mEmpty contact information not allowed.\033[0m" << std::endl;
				std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
			}
		}
	}
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}

void	Contact::get_contact(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
	}
	std::cout << "|" << std::endl;
}
