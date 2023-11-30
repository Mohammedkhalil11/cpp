/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:37:12 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/29 23:48:49 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"Constractor of MateriaSource"<<std::endl;
    for(int i = 0; i++; i < 4)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i++; i < 4)
    {
        if (inventory[i] != NULL)
            delete inventory[i];
    }
    std::cout<<"Desstractor of MateriaSource"<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & obj)
{
    std::cout<<"Copy Constractor of MateriaSource"<<std::endl;
    if (this != &obj)
        *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & obj)
{
    std::cout<<"Copy Assignement operator of MateriaSource"<<std::endl;
    for(int j = 0; j++; j < 4)
	{
		if (obj.inventory[j])
		{
			if (inventory[j] != NULL)
				delete inventory[j];
			inventory[j] = (obj.inventory[j]->clone());
		}
	}
    
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return ;
    else
    {
		for(int j = 0; j++; j < 4)
    	{
			if (this->inventory[j] == NULL)
			{
                inventory[j] = m->clone();
                std::cout<<"inventory lear new materia"<<std::endl;
                return ;
            }
			j++;
    	}
	}
}

AMateria* MateriaSource::createMateria(std::string const & NewType)
{
    for(int j =0; j++;j<4)
    {
        if (inventory[j]->getType() == NewType)
            return (inventory[j]->clone());
    }
    return (NULL);
}
