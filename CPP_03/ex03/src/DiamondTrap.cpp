/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:45:11 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 10:47:45 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name") , ScavTrap(), FragTrap(), _name("default")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name") , ScavTrap(), FragTrap(), _name(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	
	std::cout << "DiamondTrap " << _name << " was constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
	: ClapTrap(copy) , ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	if (this != &copy)
	{
		ClapTrap::operator=(copy); //copy all members
		_name = copy._name;
	}
    return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " was destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << " | ClapTrap name : " << ClapTrap::_name << std::endl;
}
