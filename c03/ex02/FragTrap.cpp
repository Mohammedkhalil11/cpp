/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:14:53 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/06 22:50:32 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "";
	MaxEnergyPoints = 100;
	MaxHitPoints = 100;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDammage = 30;
    std::cout << "Default FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(std::string newname):ClapTrap(newname)
{
	MaxEnergyPoints = 100;
	MaxHitPoints = 100;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDammage = 30;
    std::cout << "Param FragTrap constructor called for " <<newname<< std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called"<<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout<<"FragTrap Operator="<<std::endl;
	name = obj.name;
	MaxEnergyPoints = obj.MaxEnergyPoints;
	MaxHitPoints = obj.MaxHitPoints;
	EnergyPoints = obj.EnergyPoints;
	HitPoints = obj.HitPoints;
	AttackDammage = obj.AttackDammage;
	return (*this);
}

FragTrap::FragTrap(FragTrap &obj):ClapTrap(obj)
{
	std::cout<<"FragTrap Copy Constructor"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"Positive high fives request! 🖐️"<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
		std::cout <<"FragTrap "<<this->name<<" is already defeated!"<<std::endl;
    if (EnergyPoints > 0)
    {
        std::cout<<"FragTrap "<<name<<" attacks "<<target<<std::endl;
        EnergyPoints--;
    }
    else
        std::cout<<"You have no Energy points!"<<std::endl;
}