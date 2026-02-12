/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:01:29 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/12 10:53:41 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    Zombie* heapZombie1;
    Zombie* heapZombie2;

    randomChump("StackZombie");
    randomChump("Fabrice");
    randomChump("Marjorie");

    heapZombie1 = new Zombie("HeapZombie");
    heapZombie1->announce();
    heapZombie2 = new Zombie("Rosine");
    heapZombie2->announce();

    delete heapZombie1;
    delete heapZombie2;
    return 0;
}
