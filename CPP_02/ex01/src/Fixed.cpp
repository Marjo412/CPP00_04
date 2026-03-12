/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:13:22 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 14:40:42 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"
#include <cmath> //roundf

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

// Convert the fixed-point value to a float value.
float Fixed::toFloat( void ) const
{
    return (float)_value / (1 << _fracBits);
}

// Convert the fixed-point value to an integer value
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

/*
**Fixed point: Stores an integer but this integer actually represents a number
    with decimals.
** roundf : rounds a floating-point number (double, float) to the nearest integer,
    to avoid losing precision.
*/