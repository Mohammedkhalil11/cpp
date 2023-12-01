/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:23:01 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/01 13:01:29 by mokhalil         ###   ########.fr       */
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
    *this = obj;
}

Cure &Cure::operator=(Cure const & obj)
{
    if (this != &obj)
    {
        this->type = obj.getType();   
        std::cout<<"Copy assignment operator of Cure"<<std::endl;
    }
    return *this;
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
