/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:30 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 18:59:49 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(void)
{
	ClapTrap clap("CL4P-TP");
	clap.attack("Bandit");
	clap.takeDamage(5);
	clap.beRepaired(3);

	FragTrap Frag("SC4V-TP");
	Frag.attack("Skag");

	return 0;
} 
