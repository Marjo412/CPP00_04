#include "Span.hpp"

Span::Span() : _N(0) {}
Span::Span(unsigned int N) : _N(N) {}
Span::Span(const Span &copy) : _N(copy._N), _container(copy._container) {}
Span& Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        _N = copy._N;
        _container = copy._container;
    }
    return *this;
        
}
Span::~Span() {}

void Span::addNumber(int number)
{
    if (_container.size() >= _N)
        throw std::runtime_error("Span is full!");
    _container.push_back(number);
}
unsigned int Span::shortestSpan() const
{
    if (_container.size() < 2)
        throw std::runtime_error("Not enough numbers!");
    
    std::vector<int> temp = _container; //the const function can't sort _container, so I use a copy
    std::sort(temp.begin(), temp.end()); //first sort thenumbers for easier compare it

    unsigned int min = temp[1] - temp[0];

    for (size_t i = 1; i < temp.size() - 1; i++)
    {
        unsigned int diff = temp[i + 1] - temp[i];
        if (diff < min)
            min = diff;
    }
    return min;
}
unsigned int Span::longestSpan() const
{
    if (_container.size() < 2)
        throw std::runtime_error("Not enough numbers!");
    
    std::vector<int>::const_iterator min;
    std::vector<int>::const_iterator max;

    min = std::min_element(_container.begin(), _container.end());
    max = std::max_element(_container.begin(), _container.end());

    return (*max - *min);
}