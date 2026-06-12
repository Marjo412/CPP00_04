/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:42:08 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:29:15 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        virtual ~Animal();
        //ensures the correct destructor is called when deleting via Animal

        std::string getType() const;
        virtual void makeSound() const;
        //enables polymorphism: ensures the derived class implementation is called
};

#endif