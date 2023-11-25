/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:40 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/25 13:22:03 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Default constractor of Animal"<<std::endl;
}

Animal::Animal(std::string NewType)
{
	type = NewType;
	std::cout<<"Parametrise constractor of Animal"<<std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	return(*this);
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
}

Animal::~Animal()
{
	std::cout<<"Destractor of Animal"<<std::endl;
}

void Animal::makeSound()
{
	std::cout<<"Animal make sound!!"<<std::endl;	
}

std::string Animal::get_type() const
{
	return(type);
}

void Animal::set_type(std::string NewType)
{
	this->type = NewType;
}
