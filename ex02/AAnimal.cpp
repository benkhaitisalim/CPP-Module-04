/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:47:12 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:13:58 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal():type("Default")
{
    std::cout<< "AAnimal Default Constructor Called"<< std::endl;
}
AAnimal::AAnimal(const AAnimal& other):type(other.type)
{
    std::cout<< "AAnimal Copy Constructor Called"<< std::endl;
}
const std::string& AAnimal::getType() const
{
    std::cout << "Getter Called"<< std::endl;
    return type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}
AAnimal::~AAnimal()
{
    std::cout<< "AAnimal Destructor Called"<< std::endl;
}
