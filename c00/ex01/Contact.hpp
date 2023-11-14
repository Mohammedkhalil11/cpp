/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:09:10 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 02:58:40 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define  CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        Contact(const std::string& first, const std::string& last, const std::string& nick,
                const std::string& phone, const std::string& secret);
        ~Contact();
        void displayContact(int index);
        void displayDetails();
        bool isEmpty() const;
        std::string truncateString(const std::string& input, size_t length = 10);
};

#endif