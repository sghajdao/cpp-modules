/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:10:49 by sghajdao          #+#    #+#             */
/*   Updated: 2022/07/23 16:10:50 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
            std::string level;
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
    public:
            Harl(std::string level);
            void complain( std::string level );
};

#endif
