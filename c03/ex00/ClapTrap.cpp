/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:26 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 01:32:22 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name):name(name), HitPoints(10), MaxHitPoints(10),EnergyPoints(10),MaxEnergyPoints(10),AttackDammage(0)
{
	std::cout<<"Param Constructor"<<std::endl;
}

ClapTrap::ClapTrap():name(""), HitPoints(10), MaxHitPoints(10),EnergyPoints(10),MaxEnergyPoints(10),AttackDammage(0)
{
	std::cout<<"Default Constructor"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout<<"Copy Constructor"<<std::endl;
	operator=(obj);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout<<"Operator="<<std::endl;
	name = obj.name;
	MaxEnergyPoints = obj.MaxEnergyPoints;
	MaxHitPoints = obj.MaxHitPoints;
	EnergyPoints = obj.EnergyPoints;
	HitPoints = obj.HitPoints;
	AttackDammage = obj.AttackDammage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyPoints > 0)
    {
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<AttackDammage<<" points of damage!"<<std::endl;
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
		if (HitPoints - amount >= 0)
			HitPoints-= amount;
		else
			HitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0)
    {
    	std::cout<<"Getting an amount of "<<amount<<std::endl;
		if (HitPoints + amount <= MaxHitPoints)
    		HitPoints += amount;
		else
			HitPoints = MaxHitPoints;
	}
	else
    	std::cout<<"You have no Energy points!"<<std::endl;
}

void ClapTrap::Display(std::ostream &Cout)
{
	Cout << "Clap-TP " << name << " has " << HitPoints  << " hit points, " << EnergyPoints << " energy points and " << AttackDammage<< " attack dammage.";
}

std::ostream &operator<<(std::ostream &Cout, ClapTrap &obj)
{
	obj.Display(Cout);
	return (Cout);
}
