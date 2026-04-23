/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:55:40 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:13:50 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->brain_cat = new Brain();
    std::cout<< "Cat Default Constructor Called"<< std::endl;
}

Cat::Cat(const Cat& other):Animal(other),brain_cat(new Brain())
{
    type = "Cat";
    std::cout<< "Cat Copy Constructor Called"<< std::endl;
}
Brain* Cat::getbrain() const
{
    return this->brain_cat;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        type = other.type;
        delete this->brain_cat;
        this->brain_cat = new Brain(*other.brain_cat);
        
    }
    return *this;
}
Cat::~Cat()
{
    delete this->brain_cat;
    std::cout<< "Cat Destructor Called"<< std::endl;
}

void Cat::makeSound() const
{
    std::cout  <<"Cat make a sound : Meoooooow"<< std::endl;
}