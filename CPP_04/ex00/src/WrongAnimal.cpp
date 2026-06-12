/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:59:55 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 20:00:03 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
: _type(type)
{
	std::cout << "WrongAnimal parameter constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
: _type(copy._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make a wrong sound !" << std::endl;
}
