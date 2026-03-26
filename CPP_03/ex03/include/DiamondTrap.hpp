/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:44:43 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 19:51:24 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(const DiamondTrap& copy);
        ~DiamondTrap();

        using ScavTrap::attack;
		void whoAmI();
};

#endif

/*
        ClapTrap
        /      \
   ScavTrap   FragTrap
        \      /
        DiamondTrap

** ScavTrap and FragTrap are simply specializations of ClapTrap. They inherit
    the ClapTrap name. Whereas for DiamondTrap, the question asks:
    "The DiamondTrap class will have a private attribute named name." 
    Therefore, they are two distinct entities.
*/