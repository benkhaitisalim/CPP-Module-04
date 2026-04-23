/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:56:24 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:13:52 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    this->brain_dog = new Brain();
    std::cout<< "Dog Default Constructor Called"<< std::endl;
}

Dog::Dog(const Dog& other):Animal(other),brain_dog(new Brain())
{
    type = "Cat";
    std::cout<< "Dog Copy Constructor Called"<< std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        type = other.type;
        delete this->brain_dog;
        this->brain_dog = new Brain(*other.brain_dog);
        
    }
    return *this;
}
Brain* Dog::getbrain() const
{
    return this->brain_dog;
}


Dog::~Dog()
{
    delete this->brain_dog;
    std::cout<< "Dog Destructor Called"<< std::endl;
}

void Dog::makeSound() const
{
    std::cout  <<"Dog make a sound : Bark"<< std::endl;
}