/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:47:12 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:13:45 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal():type("Default")
{
    std::cout<< "Animal Default Constructor Called"<< std::endl;
}
Animal::Animal(const Animal& other):type(other.type)
{
    std::cout<< "Animal Copy Constructor Called"<< std::endl;
}
const std::string& Animal::getType() const
{
    std::cout << "Getter Called"<< std::endl;
    return type;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}
Animal::~Animal()
{
    std::cout<< "Animal Destructor Called"<< std::endl;
}
void Animal::makeSound() const
{
    std::cout<< "Animal template sound "<< std::endl;
}