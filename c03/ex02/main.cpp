/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:30 by mokhalil          #+#    #+#             */
/*   Updated: 2023/12/06 23:29:39 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


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

	FragTrap Frag("FR4G-TP");
	std::cout<<Frag<<std::endl;
	Frag.attack("FRag");
	std::cout<<Frag<<std::endl;
	Frag.highFivesGuys();

	return 0;
} 
