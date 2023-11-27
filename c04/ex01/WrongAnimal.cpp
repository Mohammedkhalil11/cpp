/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:11:36 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/26 17:06:39 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"Default Constractor of WrongAnimal"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string NewType)
{
    type = NewType;
	std::cout<<"parameterized Constractor of WrongAnimal"<<std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout<<"Destractor of WrongAnimal"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout<<"Copy constractor of WrongAnimal"<<std::endl;
	if (this != &src)
		*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout<<"Copy assignment operator of WrongAnimal"<<std::endl;
    type = obj.type;
	return(*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout<<"WrongAnimal make sound!"<<std::endl;
}

std::string	WrongAnimal::getType(void) const
{
    return (type);
}

