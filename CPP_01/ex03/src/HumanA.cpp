/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:40:47 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/29 13:35:51 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
        : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{}

void HumanA::attack(void) const
{
        std::cout << _name << " attacks with their "
                << _weapon.getType() << std::endl;
}

/*
HumanA : - Recives their weapon directly in the constructor
        - Is always armed
        - Can never exist without a weapon
        -> Using a reference
*/