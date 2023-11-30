/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:40:33 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:01:31 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout<<"Default constractor"<<std::endl;
}

void    Zombie::announce()
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
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
