/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:02:49 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 15:58:41 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
		std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
   void(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (complains[i] == level){
			(this->*function[i])();
			break ;
		}
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
