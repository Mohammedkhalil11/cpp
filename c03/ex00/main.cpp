/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:13:30 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 01:07:27 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a;
	ClapTrap	b("Morgan");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	b.takeDamage(20);
	std::cout << b << std::endl;
	b.beRepaired(3);
	std::cout << b << std::endl;
	b.attack("Eric");
	b.attack("Eric");
	std::cout << b << std::endl;
	b.attack("Eric");
	std::cout << b << std::endl;
	b.beRepaired(6);
	std::cout << b << std::endl;
	b.attack("Eric");
}