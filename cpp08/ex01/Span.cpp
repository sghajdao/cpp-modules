#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called" << std::endl;
    this->N = 0;
}

Span::Span(unsigned int N)
{
    std::cout << "Constructor called" << std::endl;
    this->N = N;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

Span &Span::operator=(const Span &src)
{
    std::cout << "Assignment operator called" << std::endl;
    this->N = src.N;
    this->vect = src.vect;
    return *this;
}

Span::Span(const Span &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

void Span::addNumber(int n)
{
    if (this->vect.size() == this->N)
        throw std::out_of_range("Cannot add any more numbers");
    this->vect.push_back(n);
}

int Span::shortestSpan()
{
    std::vector<int>			tmp = vect;
	int							result = -1;
	std::vector<int>::iterator	it;

	if (vect.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();
	if (this->vect.size() == 2)
		return result;
	for(it = tmp.begin() + 1; it != tmp.end() - 1 && result != 0; it++)
	{
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
	}
	return result;
}

int	Span::longestSpan()
{
	std::vector<int>	tmp = vect;

	if (vect.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}
