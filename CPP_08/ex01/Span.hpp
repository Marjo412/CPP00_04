#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
    private :
        unsigned int _N;
        std::vector<int> _container;

    public :
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();

        void addNumber(int number);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        template <typename Iterator> // I use template to use this funtion with any containers
        void addMnumber(Iterator begin, Iterator end)
        {
            while (begin != end)
            {
                addNumber(*begin);
                ++begin; // for the iterators we better use pre-incrementation
            }
        }
};

#endif