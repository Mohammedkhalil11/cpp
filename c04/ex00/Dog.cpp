/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:47 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 18:06:45 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
    std::cout<<"Default constractor of Dog"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Destractor of Dog"<<std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout<<"Copy assignment operator of Dog"<<std::endl;
	this->type = obj.type;
	return(*this);
}


Dog::Dog(const Dog &obj):Animal(obj)
{
	if (this != &obj)
	{
		std::cout<<"Copy constractor of Dog"<<std::endl;
		*this = obj;
	}
}

Dog::Dog(std::string NewType)
{
    type = NewType;
	std::cout<<"Parameterized constractor of Dog"<<std::endl;
}


void Dog::makeSound() const
{
	std::cout<<"The Dog Bark!!"<<std::endl;
}
