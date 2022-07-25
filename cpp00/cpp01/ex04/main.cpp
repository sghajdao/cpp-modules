/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:10:33 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/24 11:54:10 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string my_replace(std::string s1, std::string s2, std::string buf)
{
    int i;

    if (s1.empty() == true)
        return buf;
    i = buf.find(s1);
    while (i != std::string::npos)
    {
        buf.erase(i, s1.length());
        buf.insert(i, s2);
        i = buf.find(s1, i + s2.length());
    }
    return buf;
}

int main(int ac, char **av)
{
    if (ac < 4)
    {
        std::cout << "you entred less than three arguments." << std::endl;
        return (1);
    }
    else if (ac > 4)
    {
        std::cout << "you entred more than three arguments." << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string buf;
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(filename, std::ios::in);
    if (infile.is_open() == true)
    {
        outfile.open(filename + ".replace", std::ios::out | std::ios::trunc);
        if (outfile.is_open() == true)
        {
            while (std::getline(infile, buf))
            {
                buf = my_replace(s1, s2, buf);
                outfile << buf << std::endl;
            }
            outfile.close();
        }
        else
        {
            std::perror("outfile error.");
            infile.close();
            return (1);
        }
        infile.close();
    }
    else
    {
        std::perror("infile error.");
        return (1);
    }
    return (0);
}
