/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:30:40 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/02 00:08:02 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string newName)
{
    this->name = newName;
    for(int j = 0; j < 4 ; j++)
        inventory[j] = NULL;
    std::cout<<"Parameterized constractor of Character"<<std::endl;
}

Character::~Character()
{
	for(int i = 0; i < 4 ; i++)
    {
        if (inventory[i] != NULL)
            delete inventory[i];
    }
    std::cout<<"Destractor of Character"<<std::endl;
}

Character::Character(Character const &obj)
{
    std::cout<<"Copy constractor of Character"<<std::endl;
    *this = obj;
}

Character &Character::operator=(Character const & obj)
{
    if (this != &obj)
    {
        this->name = obj.getName();
        for(int j = 0; j < 4 ; j++)
        {
            if (obj.inventory[j])
            {
                if (inventory[j] != NULL)
                    delete inventory[j];
                inventory[j] = (obj.inventory[j]->clone());
            }
        }
        std::cout<<"Copy assignment operator of Character"<<std::endl;
    }
    return *this;
}

void Character::setName(std::string newName)
{
    name = newName;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    else
    {
		for(int j = 0; j < 4 ; j++)
    	{
			if (this->inventory[j] == NULL)
			{
                inventory[j] = m;
                return ;
            }
			j++;
    	}
	}
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout<<"There is no slot in this idx"<<std::endl;
        return ;
    }
    if (inventory[idx] != NULL)
    {
        delete inventory[idx];
        std::cout<<"unquip Materia"<<std::endl;
    }
    else
        std::cout<<"there is nothing to unquip"<<std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !inventory[idx])
    {
        std::cout<<"nothing found at index "<<idx<<std::endl;
        return ;
    }
    this->inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
    return(this->name);
}
