/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:26 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/06 22:54:08 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name):name(name), HitPoints(10), MaxHitPoints(10),EnergyPoints(10),MaxEnergyPoints(10),AttackDammage(0)
{
	std::cout<<"ClapTrap Param Constructor"<<std::endl;
}

ClapTrap::ClapTrap():name(""), HitPoints(10), MaxHitPoints(10),EnergyPoints(10),MaxEnergyPoints(10),AttackDammage(0)
{
	std::cout<<"ClapTrap Default Constructor"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout<<"ClapTrap Copy Constructor"<<std::endl;
	operator=(obj);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout<<"ClapTrap Operator="<<std::endl;
	if (this != &obj)
	{
		name = obj.name;
		MaxEnergyPoints = obj.MaxEnergyPoints;
		MaxHitPoints = obj.MaxHitPoints;
		EnergyPoints = obj.EnergyPoints;
		HitPoints = obj.HitPoints;
		AttackDammage = obj.AttackDammage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap Destructor"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints == 0)
		std::cout <<"ClapTrap "<<this->name<<" is already defeated!"<<std::endl;
    if (EnergyPoints > 0)
    {
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<std::endl;
        EnergyPoints--;
    }
    else
        std::cout<<"You have no Energy points!"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > 0)
	{
		std::cout<<"Take damage of "<<amount<<std::endl;
		if (HitPoints >=  amount)
			HitPoints-= amount;
		else
			HitPoints = 0;
	}
	else
		std::cout <<"ClapTrap "<<name<<" is already defeated!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints == 0)
		std::cout <<"ClapTrap "<<this->name<<" is already defeated!"<<std::endl;
	else if (EnergyPoints > 0)
    {
		std::cout<<"Getting an amount of "<<amount<<std::endl;
		if (HitPoints + amount <= MaxHitPoints)
    		HitPoints += amount;
		else
			HitPoints = MaxHitPoints;
		EnergyPoints--;
	}
	else
    	std::cout<<"You have no Energy points!"<<std::endl;
}

void ClapTrap::Display(std::ostream &Cout)
{
	Cout<<"Clap-TP "<<name<<" has "<<HitPoints<<" hit points, "<<EnergyPoints <<" energy points and "<<AttackDammage<<" attack dammage.";
}

std::ostream &operator<<(std::ostream &Cout, ClapTrap &obj)
{
	obj.Display(Cout);
	return (Cout);
}
