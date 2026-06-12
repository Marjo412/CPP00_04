/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:00:11 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/17 20:13:59 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
: WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &copy)
		WrongAnimal::operator=(copy); //copy all members 
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat make a wrong meow" << std::endl;
}
