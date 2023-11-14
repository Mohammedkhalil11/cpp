/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:28:28 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 03:53:33 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}
Contact :: ~Contact(){};
Contact::Contact(const std::string& first, const std::string& last, const std::string& nick,
        const std::string& phone, const std::string& secret)
    : firstName(first), lastName(last), nickname(nick), phoneNumber(phone), darkestSecret(secret) {}

std::string Contact :: truncateString(const std::string& input, size_t length)
{
    if (input.length() <= length) 
        return input;
    else
        return input.substr(0, length - 1) + ".";
}

void Contact:: displayContact(int index) {
    std::cout << "|" << std::right << std::setw(10) << index;
    std::cout << "|" << std::right << std::setw(10) << truncateString(firstName, 10);
    std::cout << "|" << std::right << std::setw(10) << truncateString(lastName, 10);
    std::cout << "|" << std::right << std::setw(10) << truncateString(nickname, 10) << "|" << std::endl;
}

void Contact:: displayDetails() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

bool Contact:: isEmpty() const
{
    return firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty();
}
