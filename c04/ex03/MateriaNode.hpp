/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:23:28 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/05 19:36:20 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIANODE_HPP
#define MATERIANODE_HPP

#include "AMateria.hpp"

class MateriaNode
{
    public :
        AMateria   *data;
        MateriaNode *next;
        MateriaNode();
        MateriaNode(AMateria *obj);
        MateriaNode(const MateriaNode &obj);
        MateriaNode &operator=(const MateriaNode &obj);
        ~MateriaNode();
};

#endif
