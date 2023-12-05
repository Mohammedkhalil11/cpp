/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:41:52 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/05 22:41:08 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "MateriaNode.hpp"

class LinkedList
{
    public:
        MateriaNode *head;
        LinkedList();
        ~LinkedList();
        LinkedList(const LinkedList &list);
        LinkedList& operator=(const LinkedList &list);
        void add_node(MateriaNode *l);
};

extern LinkedList list;
#endif