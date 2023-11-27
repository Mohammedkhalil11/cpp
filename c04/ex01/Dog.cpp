/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:47 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 15:15:24 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	// for(int i = 0 ; i< 100; i++)
	// 	brain->set_idea("", i);
    std::cout<<"Default constractor of Dog"<<std::endl;
}

Dog::~Dog()
{
	if (brain != NULL)
		delete brain;
    std::cout<<"Destractor of Dog"<<std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout<<"Copy assignment operator of Dog"<<std::endl;
	this->type = obj.type;
	if (brain != NULL)
		delete brain;
	this->brain = new Brain();
	for(int i = 0 ; i< 100; i++)
		brain->set_idea(obj.brain->get_idea(i), i);
	return(*this);
}

Brain *Dog::getBrain() const
{
	return(this->brain);
}

void Dog::set_Brain(Brain *other_brain)
{
	if (brain == NULL)
		brain = other_brain;
	else
	{
		delete brain;
		brain = new Brain();
		for(int i = 0 ; i< 100; i++)
			brain->set_idea(other_brain->get_idea(i), i);
		
	}
}
Dog::Dog(const Dog &obj):Animal(obj)
{
	if (this != &obj)
	{
		std::cout<<"Copy constractor of Dog"<<std::endl;
		*this = obj;
	}
}

Dog::Dog(std::string NewType, std::string idea)
{
    type = NewType;
	brain = new Brain();
	for(int i = 0 ; i< 100; i++)
			brain->set_idea(idea, i);
	std::cout<<"Parameterized constractor of Dog"<<std::endl;
}


void Dog::makeSound() const
{
	std::cout<<"The Dog Bark!!"<<std::endl;
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->get_idea(i)) << "\t\t\t | \t\t\t" << (other_dog.getBrain())->get_idea(i)<< std::endl;
	std::cout << std::endl;
}