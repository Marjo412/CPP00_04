/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 20:43:36 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/20 20:43:39 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AAnimal.hpp"


AAnimal::AAnimal()
: _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type)
: _type(type)
{
	std::cout << "AAnimal parameter constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
: _type(copy._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}
