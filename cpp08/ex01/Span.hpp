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
};

#endif
