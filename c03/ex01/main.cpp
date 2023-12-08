/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:30 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/06 23:01:19 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap clap("CL4P-TP");
	std::cout<<clap<<std::endl;
	clap.attack("Bandit");
	std::cout<<clap<<std::endl;
	clap.takeDamage(5);
	std::cout<<clap<<std::endl;
	clap.beRepaired(3);
	std::cout<<clap<<std::endl;

	ScavTrap scav("SC4V-TP");
	std::cout<<scav<<std::endl;
	scav.attack("Skag");
	std::cout<<scav<<std::endl;
	scav.guardGate();
	std::cout<<scav<<std::endl;

	return 0;
} 
