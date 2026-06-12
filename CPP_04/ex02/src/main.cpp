/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:44:19 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/20 20:45:11 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AAnimal.hpp"
# include "../include/Cat.hpp"
# include "../include/Dog.hpp"
# include "../include/WrongAnimal.hpp"
# include "../include/WrongCat.hpp"
# include "../include/Brain.hpp"

int main()
{
    std::cout << "\n----- Basic test -----" << std::endl;
    
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

	std::cout << dog->getType() << " : ";
	dog->makeSound();
	std::cout << cat->getType() << " : ";
	cat->makeSound();

    delete dog;
    delete cat;

    std::cout << "\n----- Array test -----" << std::endl;
    
    AAnimal* animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
        delete animals[i];
    
    std::cout << "\n----- Deep copy test -----" << std::endl;
    
    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want play with my ball!");
    
    Dog dog2 = dog1;
    std::cout << "dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog1.getBrain()->setIdea(0, "I want sleep!");
    std::cout << "dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
    
    return 0;
}
