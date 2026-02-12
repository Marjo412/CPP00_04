/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:40:57 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/29 14:28:11 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"

int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
return 0;
}

/*
** First part :
    - Weapon is created before HumanA
    - HumanA receive the weapon in the contructor
    - The Weapon is mandatory
    - When the club change, bob sees the change

** Second part:
    - HumanB is created without a Weapon
    - The weapon is given later
    - HumanB can exists without Weapon
    - When club change, jim sees the change

**valgrind --leak-check=full ./UnnecessaryViolence
*/