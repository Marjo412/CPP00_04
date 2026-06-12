/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:55:53 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/18 19:06:54 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog();

        void makeSound() const;
        Brain* getBrain() const;

};

#endif