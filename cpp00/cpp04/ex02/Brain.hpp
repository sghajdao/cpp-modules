/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:38:27 by sghajdao          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:20 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
            std::string ideas[100];
    public:
            Brain();
            Brain(std::string ideas[100]);
            ~Brain();
            Brain(const Brain &copy);
            Brain &operator=(const Brain &src);
            void    setIdea(int index, std::string idea);
            std::string getIdea(int index);
};

#endif
