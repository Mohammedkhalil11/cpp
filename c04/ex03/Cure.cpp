/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:23:01 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/28 23:30:35 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout<<"Default constractor of Cure"<<std::endl;
}

Cure::~Cure()
{
    std::cout<<"Destractor of Cure"<<std::endl;
}

Cure::Cure(Cure const &obj): AMateria("cure")
{
    std::cout<<"Copy constractor of Cure"<<std::endl;
    if (this != &obj)
        *this = obj;
}

Cure &Cure::operator=(Cure const & obj)
{
    std::cout<<"Copy assignment operator of Cure"<<std::endl;
    this->type = obj.getType();   
}

AMateria* Cure::clone() const
{
    AMateria *materia = new Cure(*this);
    return(materia);
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<" <name>’s wounds *"<<std::endl;
}
