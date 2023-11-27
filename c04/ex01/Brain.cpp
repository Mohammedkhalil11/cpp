/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:15:55 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/27 15:06:48 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Default Constractor of Brain"<<std::endl;
	for(int i = 0 ; i< 100; i++)
		set_idea("WALO", i);
}

Brain::Brain(std::string idea)
{
	for(int i = 0 ; i< 100; i++)
		set_idea(idea, i);
	std::cout<<"Parameterized Constractor of Brain"<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"Destractor of Brain"<<std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout<<"Copy constractor of Brain"<<std::endl;
	*this = src;
	
}

Brain& Brain::operator=( const Brain& obj )
{
	if ( this != &obj)
	{
		std::cout<<"Copy assignment operator of Brain"<<std::endl;
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

void Brain::set_idea(std::string other_ideas, int i)
{
	this->ideas[i] = other_ideas;
}

 std::string Brain::get_idea(int i) const
 {
	return(ideas[i]);
 }