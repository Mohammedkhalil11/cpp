/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:51:29 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/01 12:59:12 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include<string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & obj);
		AMateria &operator=(AMateria const & obj);
		std::string const & getType() const;
		void setType(std::string NewType);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria();
};

#endif