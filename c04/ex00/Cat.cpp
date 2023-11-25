/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:24 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/26 00:41:27 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Default constractor of Cat"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Destractor of Cat"<<std::endl;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
	*this = obj;
}

Cat::Cat(std::string NewType)
{
    type = NewType;
	std::cout<<"Parametrise constractor of Cat"<<std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return(*this);
}

void Cat::makeSound()
{
	std::cout<<"Cat make sound!!"<<std::endl;
}
