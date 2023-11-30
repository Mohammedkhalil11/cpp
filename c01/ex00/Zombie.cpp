/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:40:33 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:01:41 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout<<this->get_name()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::Zombie(std::string s)
{
    this->name = s;
    std::cout<<"constructor of Zombie "<<name<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<<"destructor of Zombie "<<name<<std::endl;
}

std::string Zombie::get_name()const
{
    return(this->name);
}

void  Zombie::set_name(std::string newName)
{
    name = newName;
}