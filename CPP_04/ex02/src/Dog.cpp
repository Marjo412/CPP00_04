/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:02:29 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/20 20:44:38 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

Dog::Dog()
: AAnimal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& copy)
: AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		AAnimal::operator=(copy); //copy all members
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return _brain;
}
