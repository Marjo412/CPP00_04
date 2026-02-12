/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:01:33 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/04 17:05:14 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
    1. Create a new Zombie on the heap
    2. Name it
    3. Returns it
The zombie will survive at the end of the function, it will be destroy in the 
main with the function `delete`.
*/

Zombie* newZombie(std::string name)
{
    Zombie* zombie;

    zombie = new Zombie(name);
    return zombie;
}
