/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:38:27 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/06 22:58:16 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "";
	MaxEnergyPoints = 50;
	MaxHitPoints = 100;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDammage = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string newname):ClapTrap(newname)
{
	MaxEnergyPoints = 50;
	MaxHitPoints = 100;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDammage = 20;
    std::cout << "Param ScavTrap constructor called for " <<newname<< std::endl;
}
void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap"<<name<<" is now in Gate keeper mode"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
		std::cout <<"ScavTrap "<<this->name<<" is already defeated!"<<std::endl;
    if (EnergyPoints > 0)
    {
        std::cout<<"ScavTrap "<<name<<" attacks "<<target<<std::endl;
        EnergyPoints--;
    }
    else
        std::cout<<"You have no Energy points!"<<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout<<"ScavTrap Operator="<<std::endl;
	name = obj.name;
	MaxEnergyPoints = obj.MaxEnergyPoints;
	MaxHitPoints = obj.MaxHitPoints;
	EnergyPoints = obj.EnergyPoints;
	HitPoints = obj.HitPoints;
	AttackDammage = obj.AttackDammage;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap &obj):ClapTrap(obj)
{
	std::cout<<"ScavTrap Copy Constructor"<<std::endl;
	operator=(obj);
}