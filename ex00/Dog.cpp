/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:56:24 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 18:45:28 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout<< "Dog Default Constructor Called"<< std::endl;
}

Dog::Dog(const Dog& other):Animal(other)
{
    type = other.type;
    std::cout<< "Dog Copy Constructor Called"<< std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}
Dog::~Dog()
{
    std::cout<< "Dog Destructor Called"<< std::endl;
}

void Dog::makeSound() const
{
    std::cout  <<"Dog make a sound : brak"<< std::endl;
}