/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:11:59 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:06:05 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() const
{
        if (Uzi)
        {
            std::cout << name << " attacks with their " << Uzi->getType() << std::endl;
        } else {
            std::cout << name << " is unarmed and cannot attack." << std::endl;
        }
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    Uzi = &newWeapon;
}

HumanB::HumanB(std::string Name):name(Name),Uzi(NULL)
{
    std::cout<<"constructor of HumanB "<<name<<std::endl;
}


HumanB::~HumanB()
{
    std::cout<<"destructor of HumanB "<<name<<std::endl;
}