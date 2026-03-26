/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:44:20 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/08 21:40:30 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
	: ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &copy)
		ClapTrap::operator=(copy); //copy all members 
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	    if (_hitPoints == 0)
    {
        std::cout << "FragTrap " << _name << " is dead and can't attack!" << std::endl;
        return;
    }
    
    if (_energyPoints == 0)
    {
        std::cout << "FragTrap " << _name << " has no energy left and can't attack!" << std::endl;
        return;
    }
    
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " 
        << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests high-fives!" << std::endl;
}
