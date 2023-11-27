/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:40 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 18:14:43 by mokhalil         ###   ########.fr       */
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
	std::cout<<"Parameterized constractor of Animal"<<std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
	std::cout<<"Copy assignment operator of Animal"<<std::endl;
	this->type = obj.type;
	return(*this);
}

Animal::Animal(const Animal &obj)
{
	if (this != &obj)
	{
		std::cout<<"Copy constractor of Animal"<<std::endl;
		*this = obj;
	}
}

Animal::~Animal()
{
	std::cout<<"Destractor of Animal"<<std::endl;
}

std::string Animal::get_type() const
{
	return(type);
}

void Animal::set_type(std::string NewType)
{
	this->type = NewType;
}
