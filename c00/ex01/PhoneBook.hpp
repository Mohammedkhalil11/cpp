/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:09:05 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 03:47:40 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

# include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactCount;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void searchContact();

        bool isNotEmpty() const;
};

int	ft_atoi(std::string str);
int    check(std::string *s, std::string msg);
int	check_white_spaces(std:: string s);
int	check_noprintables(std:: string s);

#endif