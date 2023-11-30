/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:34:30 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/29 16:06:08 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
  
		AMateria *inventory[4];
    
  public:
  
    MateriaSource( );
    MateriaSource(const MateriaSource & obj);
    MateriaSource &operator=(const MateriaSource & obj);
    ~MateriaSource();
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
};

#endif