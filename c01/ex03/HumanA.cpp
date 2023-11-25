/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:11:10 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 05:11:11 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<<name<<" attacks with their "<<Akm.getType()<<std::endl;
}

HumanA::HumanA(const std::string &Name, Weapon &A):name(Name), Akm(A)
{
}

HumanA::~HumanA(){}