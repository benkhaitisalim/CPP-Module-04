/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:47:20 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/01 11:24:40 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP 
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public  Animal
{
    private: 
    Brain* brain_dog;
    public :
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    Brain* getbrain() const;
    virtual ~Dog();
    void makeSound() const;
};

#endif