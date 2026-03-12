/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:24:21 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 14:42:40 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _value; // store the int value
        static const int _fracBits = 8; //ask in the order
    
    public:
        Fixed(); //default constructor
        Fixed(const Fixed& copy); //copy constructor
        Fixed& operator=(const Fixed& copy); //copy assignment operator
        ~Fixed(); //destructor
    
        int getRawBits( void ) const; //return the value
        void setRawBits( int const raw ); //change the value
};

#endif

/*
** The canonical orthodox form is a C++ convention that consists of defining 
    the default constructor, copy constructor, assignment operator and destructor
    in order to properly control the lifecycle and copying of objects.

**Ex00: We lay the foundations of the e Orthodox Canonical class form.
**Ex01: We create functions to convert from one type of value to an other.
**Ex02: We overload the operators to use them with our Fixed objects.
**Ex03: We use everything we created in the previous exercices.
*/