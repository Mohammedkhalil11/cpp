/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:28:20 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 04:32:14 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	check_noprintables(std:: string s)
{
	int i;

	i = 0;
	while (s[i])
	{
        if (!std::isprint(s[i]))
            return (1);
        i++;
    }
	return (0);
}

int	check_white_spaces(std:: string s)
{
	int i;

	i = 0;
	while (s[i] && std::isspace(s[i]))
		i++;
	if (s[i] == '\0')
		return(1);
	return (0);
}

int    check(std::string *s, std::string msg)
{
    if (std::cin.eof())
        exit(1);
    if ((*s).empty() || check_white_spaces(*s) || check_noprintables(*s))
    {
        std::cout << msg;
        std::getline(std::cin ,*s);
        check(s, msg);
        return (1);
    }
    return 0;
}

int check_number(std::string *s, std::string msg)
{
    if (std::cin.eof())
        exit(1);
    if ((*s).empty() || check_white_spaces(*s) || check_noprintables(*s) || ft_atoi(*s) == -1)
    {
        std::cout << msg;
        std::getline(std::cin ,*s);
        check_number(s, msg);
        return (1);
    }
    return 0;
}

PhoneBook::PhoneBook() : contactCount(0) {}
PhoneBook :: ~PhoneBook(){};
void PhoneBook::addContact()
{
    if (contactCount == 8)
    {
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];
        contactCount = 7;
    }
    std::string first, last, nick, phone, secret;
    std::cout << "Enter First Name: ";
    std::getline(std::cin ,first);
    check(&first, "Enter First Name: ");
    std::cout << "Enter Last Name: ";
    std::getline(std::cin ,last);
    check(&last, "Enter Last Name: ");
    std::cout << "Enter Nickname: ";
    std::getline(std::cin ,nick);
    check(&nick,"Enter Nickname: ");
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin ,phone);
    check_number(&phone,"Enter Phone Number: ");
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin ,secret);
    check(&secret, "Enter Darkest Secret: ");
    
    contacts[contactCount] = Contact(first, last, nick, phone, secret);
    contactCount++;
}

void PhoneBook::searchContact()
{
    std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < contactCount; i++)
        contacts[i].displayContact(i + 1);
    std::cout << "Enter the index of the contact you wan t to display: ";
    std::string line;
    std::getline(std::cin, line);
    int index = std::stoi(line);
    if (index > 0 && index <= contactCount && !contacts[index - 1].isEmpty())
    {
        std::cout << "Contact Details for Index " << index << ":" << std::endl;
        contacts[index - 1].displayDetails();
    }
    else
        std::cout << "Invalid index. Contact not found." << std::endl;
}

bool PhoneBook::isNotEmpty() const
{
    return contactCount > 0;
}