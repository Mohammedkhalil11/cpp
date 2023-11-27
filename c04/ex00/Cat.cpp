/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:24 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 18:07:16 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
    std::cout<<"Default constractor of Cat"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Destractor of Cat"<<std::endl;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
	if (this != &obj)
	{
		std::cout<<"Copy constractor of Cat"<<std::endl;
		*this = obj;
	}
}

Cat::Cat(std::string NewType)
{
    type = NewType;
	std::cout<<"Parameterized constractor of Cat"<<std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<<"Copy assignment operator of Cat"<<std::endl;
	this->type = obj.type;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout<<"The Cat Meow!!"<<std::endl;
}
