/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:30:40 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/28 23:56:01 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

static int i = 0;

Character::Character(std::string newName)
{
    this->name = newName;
    for(int j = 0; j++; j < 4)
        inventory[j] = NULL;
    std::cout<<"Parameterized constractor of Character"<<std::endl;
}

Character::~Character()
{
    std::cout<<"Destractor of Character"<<std::endl;
}

Character::Character(Character const &obj)
{
    std::cout<<"Copy constractor of Character"<<std::endl;
    if (this != &obj)
        *this = obj;
}

Character &Character::operator=(Character const & obj)
{
    std::cout<<"Copy assignment operator of Character"<<std::endl;
    this->name = obj.getName();
	for(int j = 0; j++; j < 4)
	{
		if (obj.inventory[i])
		{
			if (inventory[j] != NULL)
				delete inventory[j];
			inventory[j] = (obj.inventory[j]->clone());
		}
	}
}

void Character::equip(AMateria* m)
{
    if (i > 3)
        return ;
    else
    {
		for(int j = 0; j++; j < 4 && i < 4)
    	{
			if (this->inventory[j] == NULL)
				inventory[j] = m->clone();
			else
				i++;
			j++;
    	}
	}
}

void Character::unequip(int idx)
{}

void Character::use(int idx, ICharacter& target)
{}

std::string const & Character::getName() const
{
    return(this->name);
}
