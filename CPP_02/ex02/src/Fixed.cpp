/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:35:47 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 19:21:59 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

//default contructor
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

//cpoy constructor
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = copy._value;
}

//copy assignment operator
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _value = copy._value;
    return *this;
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    _value = n << _fracBits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(f * (1 << _fracBits));
}

float Fixed::toFloat( void ) const
{
    return (float)_value / (1 << _fracBits);
}

int Fixed::toInt( void ) const
{
    return _value >> _fracBits;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

/*
**We define the behavior(comportement) of the following operators for use with
    fixed objects.
*/
//Comparaison oparators
bool Fixed::operator>(const Fixed& other) const
{
    return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const
{
    return _value < other._value;
}
    
bool Fixed::operator>=(const Fixed& other) const
{
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const
{
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return _value != other._value;
}

//Arithmetics operators
Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result._value = (_value * other._value) >> _fracBits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{   
    Fixed result;
    result._value = (_value << _fracBits) / other._value;
    return result;
}

//Increment / Decrement
Fixed& Fixed::operator++()
{
    _value += 1;
    return *this; //return a reference
}

//Saves the old value, modifies the object and returns the old value (copy)
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _value += 1;
    return temp; //return a value
}

Fixed& Fixed::operator--()
{
    _value -= 1;
    return *this; //return a reference
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _value -= 1;
    return temp; //return a value
}

//Min / Max
//Compare a and b and Return a reference to the smaller value
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

//We're making two versions so that the function works with const objects
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

//Compare a and b and Return a reference to the bigger value
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
