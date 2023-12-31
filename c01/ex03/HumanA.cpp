/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:11:10 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:03:10 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<<name<<" attacks with their "<<Akm.getType()<<std::endl;
}

HumanA::HumanA(const std::string &Name, Weapon &A):name(Name), Akm(A)
{
    std::cout<<"constructor of HumanA "<<name<<std::endl;
}

HumanA::~HumanA()
{
    std::cout<<"destructor of HumanA "<<name<<std::endl;
}