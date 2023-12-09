/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:37:12 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/09 16:25:43 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "LinkedList.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"Constractor of MateriaSource"<<std::endl;
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    list.~LinkedList();
    for(int i = 0; i < 4; i++)
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
    for(int j = 0; j < 4 ; j++)
	{
		if (obj.inventory[j])
		{
			if (inventory[j] != NULL)
				delete inventory[j];
			inventory[j] = (obj.inventory[j]->clone());
		}
	}
    return *this;
    
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m || (m->getType().compare("ice") && m->getType().compare("cure")))
        return ;
    else
    {
		for(int j = 0; j < 4 ; j++)
    	{
			if (this->inventory[j] == NULL)
			{
                inventory[j] = m->clone();
                list.add_node(new MateriaNode(m));
                std::cout<<"inventory lear new materia"<<std::endl;
                return ;
            }
    	}
	}
}

AMateria* MateriaSource::createMateria(std::string const & NewType)
{
    for(int j = 0; j < 4 ; j++)
    {
        if (inventory[j] != NULL)
        {
            if (inventory[j]->getType() == NewType)
            {  
                AMateria *ptr = inventory[j]->clone();
                list.add_node(new MateriaNode(ptr));
                return (ptr);
            }
        }
    }
    return (NULL);
}
