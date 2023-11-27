/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:24 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 15:15:16 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	// for(int i = 0 ; i< 100; i++)
	// 	brain->set_idea("", i);
    std::cout<<"Default constractor of Cat"<<std::endl;
}

Cat::~Cat()
{
	if (brain != NULL)
		delete brain;
    std::cout<<"Destractor of Cat"<<std::endl;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
	if (this != &obj)
	{
		std::cout<<"Copy constractor of Cat"<<std::endl;
		*this = obj;
	}
}

Cat::Cat(std::string NewType, std::string idea)
{
    type = NewType;
	brain = new Brain();
	for(int i = 0 ; i< 100; i++)
	// Dog & medor_copy_ref = medor_copy;
	// Cat & fifi_copy_ref = fifi_copy;

	// std::cout << std::endl << "comparing" << std::endl;
	// medor.compareTo(medor_copy_ref);
	// fifi.compareTo(fifi_copy_ref);
	// std::cout << std::endl;

			brain->set_idea(idea, i);
	std::cout<<"Parameterized constractor of Cat"<<std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<<"Copy assignment operator of Cat"<<std::endl;
	this->type = obj.type;
	if (brain != NULL)
		delete brain;
	this->brain = new Brain();
	for(int i = 0 ; i< 100; i++)
		brain->set_idea(obj.brain->get_idea(i), i);
	return(*this);
}

void Cat::makeSound() const
{
	std::cout<<"The Cat Meow!!"<<std::endl;
}

Brain *Cat::getBrain() const
{
	return(this->brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->get_idea(i)) << "\t\t\t | \t\t\t" << (other_cat.getBrain())->get_idea(i)<< std::endl;
	std::cout << std::endl;
}