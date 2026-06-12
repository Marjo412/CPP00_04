/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:00:26 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:29:57 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};

#endif

/*
** This part is to implemente a broken polymorphism and see what happens
    -> without `virtual`
** Virtual : allows the function to be resolved at runtime (polymorphism)
    so the correct function of the derived class is called via a base pointer
    -> enables polymorphism.
*/