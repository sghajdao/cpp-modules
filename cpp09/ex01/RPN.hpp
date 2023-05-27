/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:27 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/26 15:32:38 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <list>
#include <sstream>

class RPN {
    private:
        std::stack<long> pile;
        long resault;
    public:
        RPN();
        RPN(char *input);
        ~RPN();
        RPN(RPN const &src);
        RPN operator=(RPN const &src);

        bool checkInput(std::string input);
        void pushToStack();
};

#endif