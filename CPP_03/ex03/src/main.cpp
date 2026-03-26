/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:45:50 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/10 10:55:54 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/DiamondTrap.hpp"

int main(void)
{
    std::cout << "\n----- Construction -----" << std::endl;
    DiamondTrap a("Oscar");
    a.whoAmI();
    
    std::cout << "\n----- Basic actions -----" << std::endl;
    a.attack("Minion");
    a.takeDamage(30);
    a.beRepaired(10);
    a.whoAmI();
    
    std::cout << "\n----- Death test -----" << std::endl;
    a.takeDamage(200);
    a.attack("Mob");
    a.beRepaired(5);
    a.whoAmI();

    std::cout << "\n----- Energy depletion test -----" << std::endl;
    DiamondTrap b("Lily");
    int i = 0;
    while (i < 51)
    {
        b.attack("Boss");
        i++;
    }

    std::cout << "\n----- Copy constructor test -----" << std::endl;
    DiamondTrap c(b);
    c.whoAmI();
    
    std::cout << "\n----- Assignment operator test -----" << std::endl;
    DiamondTrap d;
    d = a;
    d.whoAmI();

    std::cout << "\n----- Polymorphic destruction test -----" << std::endl;
    ClapTrap* ptr = new DiamondTrap("Poly");
    delete ptr;
    
    std::cout << "\n----- Automatic destruction -----" << std::endl;
    
    return 0;
}
