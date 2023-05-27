/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:13 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/24 12:02:14 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/stat.h>
#include <map>
#include <cstring>
#include <string>
#include <exception>

class BitcoinExchange {
    private:
        std::map<std::string, long double> data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &);
        BitcoinExchange(const char *dataBase, const char *inputFile);

        void readInputFile(const char *inputFile);
        bool checkLine(std::string str);
        void displayData(std::string str);
        void checkData(std::string str);
        void getData(const char *dataBase);
};

#endif