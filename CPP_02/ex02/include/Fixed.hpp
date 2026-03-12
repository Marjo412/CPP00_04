/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:35:54 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 15:08:38 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fracBits = 8;

    public:
    Fixed(); //default constructor
    Fixed(const Fixed& copy); //copy constructor
    Fixed& operator=(const Fixed& copy); //copy assignment operator
    ~Fixed(); //destructorconst Fixed& obj

    Fixed(const int n); //constructor that takes a constant integer
    Fixed(const float f); //constructor that takes a constant floating-point number

    float toFloat( void ) const; //converts a fixed-point to a floating-point.
    int toInt( void ) const; //converts a fixed-point to an integer.
    
    int getRawBits( void ) const; //return the value
    void setRawBits( int const raw ); //change the value

    /*This part is to use the fixed-point objects*/
    //Comparaison oparators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    //Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    
    //Increment / Decrement
    Fixed& operator++(); // pre-increment
    Fixed operator++(int); // post-increment
    Fixed& operator--(); // pre-decrement
    Fixed operator--(int); // post-decrement

    //Min / Max
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
//This function tells the program how to display a Fixed object in an output stream

#endif

/*
** The exercice should be :
    + -> _value + copy._value
    - -> _value - copy._value
    * -> (_value * copy._value)>>8
    / -> (_value<<8)/ copy._value
    ++ -> _value += 1
    -- -> _value -= 1

**Fixed& operator++() -> Modifies the object and returns a reference to the
                        modified objet
**Fixed operator++(int) -> Saves the old value, modifies the object
                            and returns the old value (copy)
*/