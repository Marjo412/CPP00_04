/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:01:37 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/02 17:09:08 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
    1. Create a new Zombie on the stack
    2. Name it
    3. Announce itself
The zombie will be destoy at the end of the function, the destructor will be
automatically called.
*/

void randomChump(std::string name)
{
    Zombie zombie(name); //zombie is created on the stack/contructor is called

    zombie.announce(); //zombie speak
}
//the destructor will be called automatically
