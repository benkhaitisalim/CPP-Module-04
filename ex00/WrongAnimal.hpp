/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:48:18 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/03 12:16:57 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal 
{
    protected : 
    std::string type;
    public : 
    WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& other);
    const std::string& getType() const;
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();
    void makeSound() const;
};

#endif