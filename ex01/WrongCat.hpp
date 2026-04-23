/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:50:45 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/29 21:13:54 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public  WrongAnimal
{
    public :
    WrongCat();
    WrongCat(std::string WCat);
    WrongCat(const WrongCat& other);
    const std::string& getType() const;
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();
    void makeSound() const;

};

#endif
