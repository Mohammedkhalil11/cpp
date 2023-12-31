/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:24:57 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/01 13:01:41 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout<<"Default constractor of Ice"<<std::endl;
}

Ice::~Ice()
{
    std::cout<<"Destractor of Ice"<<std::endl;
}

Ice::Ice(Ice const &obj) : AMateria("ice")
{
    std::cout<<"Copy constractor of Ice"<<std::endl;
    *this = obj;
}

Ice &Ice::operator=(Ice const & obj)
{
    if (this != &obj)
    {
        std::cout<<"Copy assignment operator of Ice"<<std::endl;
        this->type = obj.getType();   
    }
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *materia = new Ice(*this);
    return(materia);
}

void Ice::use(ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}