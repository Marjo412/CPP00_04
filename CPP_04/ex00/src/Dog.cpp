/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:02:29 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:12:15 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
: Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
		Animal::operator=(copy); //copy all members 
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}
