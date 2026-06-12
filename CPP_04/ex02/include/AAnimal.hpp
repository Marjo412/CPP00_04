/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 20:42:20 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/20 20:42:41 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string _type;
    
    public:
        AAnimal();
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& copy);
        AAnimal& operator=(const AAnimal& copy);
        virtual ~AAnimal();
        //ensures the correct destructor is called when deleting via AAnimal

        std::string getType() const;
        virtual void makeSound() const = 0; // abstract class
        //enables polymorphism: ensures the derived class implementation is called
};

#endif