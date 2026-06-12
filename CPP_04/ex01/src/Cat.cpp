/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:02:19 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/18 19:02:29 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& copy)
: Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy); //copy all members
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return _brain;
}
