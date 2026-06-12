/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:29:36 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/15 12:22:21 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = copy._ideas[i];
        i++;
    }
}
 
Brain& Brain::operator=(const Brain& copy)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        int i = 0;
        while (i < 100)
        {
            _ideas[i] = copy._ideas[i];
            i++;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}

// This function receives an index and returns the matching idea
std::string Brain::getIdea (int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return _ideas[index];
}

// This function receives an index and a new idea then updates the array
void Brain::setIdea (int index, const std::string idea)
{
    if (index < 0 || index >= 100)
        return;
    _ideas[index] = idea;
}
