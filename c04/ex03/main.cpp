/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:51:08 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/10 00:56:29 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "LinkedList.hpp"
#include <cstdlib>  

void f(void)
{
	IMateriaSource* src = new MateriaSource();
	AMateria *p = new Ice();
	src->learnMateria(p);
	src->learnMateria(p);
	src->learnMateria(p);
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	// https://rphlr.github.io/42-Evals/Cursus/CPP04/
}

int main()
{
	f();
	return 0;
}
