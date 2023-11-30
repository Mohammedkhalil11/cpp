/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:02:25 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/15 04:51:51 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	else
		harl.complain("irrelevant string");
	return (EXIT_SUCCESS);
}