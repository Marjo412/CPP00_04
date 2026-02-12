/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:40:49 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/29 14:24:48 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
        : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{}

void HumanB::setWeapon(Weapon& weapon)
{
        _weapon = &weapon;
}

void HumanB::attack(void) const
{
        if (_weapon)
                std::cout << _name << " attacks with their "
                        << _weapon->getType() << std::endl;
        else
                std::cout << _name << " has no weapon" << std::endl;
}

/*
HumanB : - Doesn't recive a weapon in the conrtustor
        - Can exist without a weapon
        - Can receive a weapn later using setWeapon()
        -> Using a pointer
*/