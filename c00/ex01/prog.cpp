/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:29:28 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 04:26:24 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int    check_input(std::string s, std::string msg)
{
    if (std::cin.eof())
        exit(1);
    if (s.empty() || check_white_spaces(s) || check_noprintables(s))
    {
        std::cout << msg << std::endl;
        return (1);
    }
    return 0;
}

int main()
{
	PhoneBook phoneBook;

    while (1)
	{
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::string command;
        std::getline(std::cin, command);
        if (!command.compare("ADD"))
            phoneBook.addContact();
        else if (!command.compare("SEARCH"))
		{
            if (phoneBook.isNotEmpty()) 
                phoneBook.searchContact();
            else
                std::cout << "Phonebook is empty. Add contacts before searching." << std::endl;
        }
		else if (!command.compare("EXIT"))
            break;
        else if (check_input(command, "Invalid command. Please enter ADD, SEARCH, or EXIT."));
		else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }

    return 0;
}
