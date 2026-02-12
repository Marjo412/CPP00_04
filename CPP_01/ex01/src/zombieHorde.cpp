/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:20:07 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/04 18:17:11 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
    1. Allocate N zombies in a single allocation
    2. Initialize each zombie with `name`
    3. Return a pointer to the first zombie
    4. Enable proper deallocation with `delete[]`
*/

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde;
    int     i;

    if (N <= 0)
        return NULL;

    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}
