/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:47 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/26 00:41:10 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Default constractor of Dog"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Destractor of Dog"<<std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return(*this);
}

Dog::Dog(const Dog &obj):Animal(obj)
{
}

Dog::Dog(std::string NewType)
{
    type = NewType;
	std::cout<<"Parametrise constractor of Dog"<<std::endl;
}


void Dog::makeSound()
{
	std::cout<<"Dog make sound!!"<<std::endl;
}
