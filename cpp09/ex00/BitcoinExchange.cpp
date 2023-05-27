/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:10 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/27 13:16:04 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const char *dataBase, const char *inputFile) {
	getData(dataBase);
	readInputFile(inputFile);
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
    *this = src;
}

void BitcoinExchange::getData(const char *dataBase) {
	std::fstream dataBaseFile;
	std::string	 tmp;
	std::string	 date;
	long double	 value;

	dataBaseFile.open(dataBase, std::fstream::in);
	while (dataBaseFile) {
		dataBaseFile >> tmp;
		if (tmp.find("-") != std::string::npos) {
			date = tmp.substr(0, tmp.find(","));
			value = atof(tmp.c_str() + strlen(date.c_str()) + 1);
			data[date] = value;
		}
	}
	dataBaseFile.close();
}

bool BitcoinExchange::checkLine(std::string str) {
	if (str.find(" | ") == std::string::npos)
		return false;
	size_t i = str.find(" | ") + 3;
	int p = 0;
	while (i < str.size()) {
		if ((str[i] > '9' || str[i] < '0') && str[i] != '.')
			return false;
		if (p > 1)
			return false;
		if (str[i] == '.') p++;
		i++;
	}
	return true;
}

void BitcoinExchange::displayData(std::string str) {
	std::map<std::string, long double>::iterator it;
	std::string date;
	long double val;

	if (!checkLine(str)) {
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}
	date = str.substr(0, str.find(" "));
	val = atof(str.c_str() + str.find("|") + 2);
	it = data.find(date);
	if (it != data.end())
		std::cout << date << " => " << val << " = " << val * data.at(date) << std::endl;
	else {
		data[date] = val;
		it = data.find(date);
		it--;
		std::cout << date << " => " << val << " = " << val * it->second << std::endl;
		data.erase(date);
	}
}

void BitcoinExchange::checkData(std::string str) {
	int year;
	int month;
	int day;
	long val;

	year = atoi(str.c_str());
	if (year < 2009) {
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}

	month = atoi(str.c_str() + 5);
	if (month < 1 || month > 12) {
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}

	day = atoi(str.c_str() + 8);
	if (day < 1 || day > 31) {
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}

	if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
			std::cout << "Error: bad input => " << str << std::endl;
			return;
		}
    }

    if (month == 2) {
        if (year % 4 == 0) {
            if (day > 29) {
                std::cout << "Error: bad input => " << str << std::endl;
		        return ;
            }
        }
        else {
            if (day > 28)
            {
                std::cout << "Error: bad input => " << str << std::endl;
		        return ;
            }
        }
    }

	val = atol(str.c_str() + 13);
	if (val < 0 || val > 1000) {
		if (val < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (val > 1000)
			std::cout << "Error: too large a number." << std::endl;
		return ;
	}
	if (year == 2009 && month == 1 && day < 2) {
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}
	displayData(str);
}

void BitcoinExchange::readInputFile(const char *inputFile) {
	std::fstream ifs;
	std::string tmp;

	ifs.open(inputFile, std::fstream::in);
	std::getline(ifs, tmp);
	if (tmp.find("date | value") == std::string::npos) {
		std::cout << "Invalid input file\n";
		return;
	}
	while (std::getline(ifs, tmp)) {
		checkData(tmp);
	}
}
