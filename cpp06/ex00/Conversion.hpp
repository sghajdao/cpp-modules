/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:55 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/05 14:47:45 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class Conversion
{
	private:
		const std::string _input;
		int _type;
		char _char;
		int _int;
		float _float;
		double _double;
	public:
		Conversion();
		Conversion(const std::string input);
		Conversion(const Conversion &src);
		~Conversion();
		int checkInput(void);
		void convertInput(void);

		void fromChar(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);

		void printOutput(void)const;

		std::string getInput(void)const;
		int getType(void)const;
		char getChar(void)const;
		int getInt(void)const;
		float getFloat(void)const;
		double getDouble(void)const;

		Conversion &operator=(const Conversion &src);

	class ErrorException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
