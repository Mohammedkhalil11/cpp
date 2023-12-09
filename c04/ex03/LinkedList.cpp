/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:51:16 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/10 00:43:25 by mokhalil         ###   ########.fr       */
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
    MateriaNode *tmp = this->head;
    while (tmp)
    {
        if (tmp->data != NULL)
        {
            delete tmp->data;
            tmp->data = NULL;
        }
        tmp = tmp->next;
    }
}

LinkedList::LinkedList(const LinkedList &list)
{
    *this = list;
}

LinkedList& LinkedList::LinkedList::operator=(const LinkedList &list)
{
    if (this != &list)
    {
        if(head)
        {
            MateriaNode *tmp = head;
            while(tmp)
            {
                delete tmp->data;
                tmp = tmp->next;
            }
        }
        this->head = list.head;
    }
    return (*this);
}

int check_for_duplicate_add(LinkedList *l, MateriaNode *n)
{
    MateriaNode *tmp = l->head;
    while(tmp)
    {
        if (tmp->data == n->data)
        {
            return (1);
        }
        tmp = tmp->next;
    }
    return (0);
}

void LinkedList::add_node(MateriaNode *l)
{
    l->next = NULL;
    if (head == NULL)
    {
        head = l;
        return;
    }
    if (!check_for_duplicate_add(this, l))
    {
        MateriaNode *tmp = head;
        while(tmp->next)
            tmp = tmp->next;
        tmp->next = l;
    }
    return;
}
