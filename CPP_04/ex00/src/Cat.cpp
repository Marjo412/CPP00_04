/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:02:19 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:12:04 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
: Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
		Animal::operator=(copy); //copy all members 
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
