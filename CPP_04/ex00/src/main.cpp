/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:40:18 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/12 21:39:16 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"
# include "../include/Cat.hpp"
# include "../include/Dog.hpp"
# include "../include/WrongAnimal.hpp"
# include "../include/WrongCat.hpp"

int main()
{
    std::cout << "\n----- Animal tests -----" << std::endl;
    const Animal* meta = new Animal(); //creation
    meta->makeSound();
    delete meta; //destruction

    std::cout << "\n----- Cat tests -----" << std::endl;
    const Animal* i = new Cat();
    std::cout << i->getType() << " : ";
    i->makeSound(); //will output the cat sound
    delete i;
    
    std::cout << "\n----- Dog tests -----" << std::endl;
    const Animal* j = new Dog();
    std::cout << j->getType() << " : ";
    j->makeSound(); //will output the dog sound
    delete j;
    
    std::cout << "\n----- WrongAnimal tests -----" << std::endl;
    const WrongAnimal* wrongmeta = new WrongAnimal();
    std::cout << wrongmeta->getType() << " : ";
    wrongmeta->makeSound();
    delete wrongmeta;
    
    std::cout << "\n----- WrongCat tests -----" << std::endl;
    const WrongAnimal* wrongi = new WrongCat();
    std::cout << wrongi->getType() << " : ";
    wrongi->makeSound(); //will output the  wrong cat sound
    delete wrongi;
    
    return 0;
}
