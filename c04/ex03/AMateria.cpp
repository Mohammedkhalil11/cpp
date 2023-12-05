/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:53:50 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/02 11:24:23 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "";
    std::cout<<"Default constractor of AMateria"<<std::endl;
}

AMateria::AMateria(std::string const & newtype)
{
    this->type = newtype;
    std::cout<<"Parameterized constractor of AMateria"<<std::endl;
}

AMateria::AMateria(AMateria const & obj)
{
    std::cout<<"Copy constractor of AMateria"<<std::endl;
    *this = obj;
}

AMateria &AMateria::operator=(AMateria const & obj)
{
    if (this != &obj)
    {
        this->type = obj.getType();   
        std::cout<<"Copy assignment operator of AMateria"<<std::endl;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout<<"Destractor of AMateria"<<std::endl;
}

std::string const & AMateria::getType() const
{
        return(this->type);
}

void AMateria::setType(std::string NewType)
{
    this->type = NewType;
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"AMateria "<<this->type<<" used on "<<target.getName()<<std::endl;
}
