#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack() {};
        MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};
        MutantStack& operator=(const MutantStack &copy)
        {
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return *this;
        };
        ~MutantStack() {};

        //Creation of the alias, using template for using it with every type
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        const_iterator begin() const
        {
            return this->c.begin();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
};

#endif

/*
**Aliases are used to give a simpler name to a complex type.
    If a type is long to write and difficult to read, creating
    an alias allows you to simply use that name throughout the class.
*/