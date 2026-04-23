/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:03:00 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 23:06:04 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const AAnimal* arr[2];
    arr[0] = new Cat();
    arr[1] = new Dog();
    for(int i = 0; i < 2;i++)
    {
        arr[i]->makeSound();
    }
    for(int i = 0; i < 2;i++)
    {
        delete arr[i];
    }
    Dog original;
    original.getbrain()->ideas[0] = "eat";
    Dog copy = original;
    copy.getbrain()->ideas[0] = "sleap";
    std::cout << original.getbrain()->ideas[0] << std::endl;
    std::cout << copy.getbrain()->ideas[0] << std::endl;
    
}
