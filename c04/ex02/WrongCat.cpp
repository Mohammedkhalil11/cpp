/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:10:38 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/26 17:03:16 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"Default constroctor of WrongCat"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"Destractor of WrongCat"<<std::endl;
}

void    WrongCat::makeSound() const
{
	std::cout<<"WrongCat make sound!"<<std::endl;
}