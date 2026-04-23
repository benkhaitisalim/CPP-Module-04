/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:55:40 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 18:45:20 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout<< "Cat Default Constructor Called"<< std::endl;
}

Cat::Cat(const Cat& other):Animal(other)
{
    type = other.type;
    std::cout<< "Cat Copy Constructor Called"<< std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}
Cat::~Cat()
{
    std::cout<< "Cat Destructor Called"<< std::endl;
}

void Cat::makeSound() const
{
    std::cout  <<"Cat make a sound : Meoooooow"<< std::endl;
}