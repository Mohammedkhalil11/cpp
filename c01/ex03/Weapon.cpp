/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:10:43 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:08:21 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : type(weaponType)
{
    std::cout<<"Parameterized constructor of Weapon "<<type<<std::endl;
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}

Weapon::Weapon()
{
    type = "";
    std::cout<<"Default constructor of Weapon "<<std::endl;
}

Weapon::~Weapon()
{
    std::cout<<"Parameterized constructor of Weapon "<<type<<std::endl;
}