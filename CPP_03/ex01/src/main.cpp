/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:25:09 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/01 18:25:38 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ClapTrap.hpp"
# include "../include/ScavTrap.hpp"

int main(void)
{
    std::cout << "\n----- Construction -----" << std::endl;
    ScavTrap a("Oscar");
    
    std::cout << "\n----- Basic actions -----" << std::endl;
    a.takeDamage(5);
    a.attack("Minion");
    a.beRepaired(3);

    std::cout << "\n----- Guard gate test -----" << std::endl;
    a.guardGate();
    
    std::cout << "\n----- Death test -----" << std::endl;
    a.takeDamage(100);
    a.attack("Mob");
    a.beRepaired(5);

    std::cout << "\n----- Energy depletion test -----" << std::endl;
    ScavTrap b("Lily");
    int i = 0;
    while (i < 51)
    {
        b.attack("Boss");
        i++;
    }

    std::cout << "\n----- Copy constructor test -----" << std::endl;
    ScavTrap c(b);
    
    std::cout << "\n----- Assignment operator test -----" << std::endl;
    ScavTrap d;
    d = a;
    
    std::cout << "\n----- Automatic destruction -----" << std::endl;
    
    return 0;
}

/*
**In C++, when there is inheritance, the base class is always constructed first
    and then the derived class; otherwise, the object would be incomplete.
*/