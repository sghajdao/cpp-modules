/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:48:00 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/11 12:48:01 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vect;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addByIteratorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
