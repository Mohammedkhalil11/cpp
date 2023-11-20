/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:58:49 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/20 12:28:08 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string arg = argv[i];
            int j = 0;
            while (arg[j])
            {
                arg[j] = std::toupper(arg[j]);
                j++;
            }
            std::cout << arg;
        }
        std::cout << std::endl;
    }
    return 0;
}
