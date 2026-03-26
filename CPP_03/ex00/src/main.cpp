/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:33:58 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/02 17:19:46 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ClapTrap.hpp"

int main(void)
{
    std::cout << "\n----- Construction -----" << std::endl;
    ClapTrap a("Bob");
    
    std::cout << "\n----- Basic actions -----" << std::endl;
    a.takeDamage(5);
    a.attack("Enemy");
    a.beRepaired(3);
    
    std::cout << "\n----- Death test -----" << std::endl;
    a.takeDamage(100);
    a.attack("Orc");
    a.beRepaired(5);

    std::cout << "\n----- Energy depletion test -----" << std::endl;
    ClapTrap b("Rose");
    int i = 0;
    while (i < 11)
    {
        b.attack("Zombie");
        i++;
    }

    std::cout << "\n----- Copy constructor test -----" << std::endl;
    ClapTrap c(b);
    
    std::cout << "\n----- Assignment operator test -----" << std::endl;
    ClapTrap d;
    d = a;
    
    std::cout << "\n----- Automatic destruction -----" << std::endl;
    
    return 0;
}
