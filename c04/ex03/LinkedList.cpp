/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:51:16 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/05 22:59:12 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList list;

LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList::~LinkedList()
{
}

LinkedList::LinkedList(const LinkedList &list)
{
    *this = list;
}

LinkedList& LinkedList::LinkedList::operator=(const LinkedList &list)
{
    if (this != &list)
    {
        // if(head)
        // {
        //     MateriaNode *tmp = head;
        //     while(tmp)
        //     {
        //         free(tmp->data);
        //         tmp = tmp->next;
        //     }
        // }
        this->head = list.head;
    }
    return (*this);
}

void LinkedList::add_node(MateriaNode *l)
{
    l->next = NULL;
    if (head == NULL)
    {
        head = l;
        return;
    }
    MateriaNode *tmp = head;
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = l;
}
