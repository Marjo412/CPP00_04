/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:19:12 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/12 11:17:59 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    Zombie* horde;
    int     i;
    int     N;

    N = 100;
    horde = zombieHorde(N, "HordeZombie");

    if (!horde)
        return (1);
    
    i = 0;
    while (i < N)
    {
        horde[i].announce();
        i++;
    }

    delete[] horde;
    return 0;
}
