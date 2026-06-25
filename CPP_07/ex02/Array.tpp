#include "Array.hpp"

//Construction with no parameter: Creates an empty array.
template<class T>
Array<T>::Array() : _len(0), _array(NULL)
{}

// Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default
template<class T>
Array<T>::Array(unsigned int n) : _len(n)
{
    _array = new T[n];
}

// Construction by copy 
template<class T>
Array<T>::Array(const Array& copy)
{
    _len = copy._len;
    _array = new T[_len];

    for (unsigned int i = 0; i < _len; i++)
        _array[i] = copy._array[i];
}

//Construction by copy assignment operator
template<class T>
Array<T>& Array<T>::operator=(const Array& copy)
{
    if (this != &copy)
    {
        delete[] _array;

        _len = copy._len;
        _array = new T[_len];

        for (unsigned int i = 0; i < _len; i++)
            _array[i] = copy._array[i];
    }
    return *this;
}

//Destructor with delete[] to free the memory allocated for the array
template<class T>
Array<T>::~Array()
{
    delete[] _array;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _len)
        throw std::exception();
    return _array[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _len)
        throw std::exception();
    return _array[index];
}

template<typename T>
unsigned int Array<T>::size(void) const
{
    return _len;
}