/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:52:15 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:13:56 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout<< "WrongCat Default Constructor Called"<< std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other)
{
    std::cout<< "WrongCat Copy Constructor Called"<< std::endl;
    *this = other;
}
WrongCat::WrongCat(std::string WCat)
{
    std::cout<< "WrongCat Overload Constructor Called"<< std::endl;
    this->type = WCat;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat Destructor Called"<< std::endl;
}
void WrongCat::makeSound() const
{
    std::cout<< "WrongCat Sound : Okby"<< std::endl;
}
