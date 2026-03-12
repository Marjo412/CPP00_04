/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:13:17 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 14:50:07 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _value; //contain le value muliplied by 256
        static const int _fracBits = 8;

    public:
    Fixed(); //default constructor
    Fixed(const Fixed& copy); //copy constructor
    Fixed& operator=(const Fixed& copy); //copy assignment operator
    ~Fixed(); //destructor

    Fixed(const int n); //constructor that takes a constant integer
    Fixed(const float f); //constructor that takes a constant floating-point number

    float toFloat( void ) const; //converts a fixed-point to a floating-point.
    int toInt( void ) const; //converts a fixed-point to an integer.
    
    int getRawBits( void ) const; //return the value
    void setRawBits( int const raw ); //change the value
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
//This function tells the program how to display a Fixed object in an output stream

#endif