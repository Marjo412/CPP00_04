/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:42:20 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:32:29 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"


Animal::Animal()
: _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
: _type(type)
{
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
: _type(copy._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << _type << " make a sound !" << std::endl;
}
