/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:44:25 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/05 15:44:26 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/FragTrap.hpp"

int main(void)
{
    std::cout << "\n----- Construction -----" << std::endl;
    FragTrap a("Oscar");
    
    std::cout << "\n----- Basic actions -----" << std::endl;
    a.takeDamage(5);
    a.attack("Minion");
    a.beRepaired(3);
    a.highFivesGuys();
    
    std::cout << "\n----- Death test -----" << std::endl;
    a.takeDamage(100);
    a.attack("Mob");
    a.beRepaired(5);

    std::cout << "\n----- Energy depletion test -----" << std::endl;
    FragTrap b("Lily");
    int i = 0;
    while (i < 101)
    {
        b.attack("Boss");
        i++;
    }

    std::cout << "\n----- Copy constructor test -----" << std::endl;
    FragTrap c(b);
    
    std::cout << "\n----- Assignment operator test -----" << std::endl;
    FragTrap d;
    d = a;
    
    std::cout << "\n----- Automatic destruction -----" << std::endl;
    
    return 0;
}
