/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:56:37 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/29 18:21:44 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure :public AMateria
{
    public:
        Cure();
        Cure(Cure const &obj);
        Cure &operator=(Cure const &obj);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};


#endif