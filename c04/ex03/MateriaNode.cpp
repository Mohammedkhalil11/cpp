/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:18:19 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/05 19:41:22 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaNode.hpp"

MateriaNode::MateriaNode()
{
    data = NULL;
    next = NULL;
}

MateriaNode::MateriaNode(AMateria *obj)
{
    data = obj;
    next = NULL;
}

MateriaNode::MateriaNode(const MateriaNode &obj)
{
     *this = obj;
}

MateriaNode &MateriaNode::operator=(const MateriaNode &obj)
{
    if (this != &obj)
    {
        data = obj.data;
        next = obj.next;
    }
    return *this;
}

MateriaNode::~MateriaNode()
{

}