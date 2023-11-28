/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:55:53 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/28 23:28:55 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &obj);
        Ice &operator=(Ice const &obj);
        ~Ice();
        virtual AMateria* Ice::clone() const;
        virtual void use(ICharacter& target);
};

#endif