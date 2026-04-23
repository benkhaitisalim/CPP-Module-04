/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:52:15 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:14:05 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Default")
{
    std::cout<< "WrongAnimal Default Constructor Called"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout<< "WrongAnimal Copy Constructor Called"<< std::endl;
    *this = other;
}
const std::string& WrongAnimal::getType() const
{
    return type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal Destructor Called"<< std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal Sound : WeWe"<< std::endl;
}
