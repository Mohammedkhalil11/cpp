/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:43:49 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 05:09:27 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string k = "HI THIS IS BRAIN";
    std::string *PTR = &k;
    std::string &REF = k; 
    std::cout<<"The memory address of the string variable "<<&k<<std::endl;
    std::cout<<"The memory address held by PTR "<<PTR<<std::endl;
    std::cout<<"The memory address held by REF "<<&REF<<std::endl;
    std::cout<<"The value of the string variable. "<<k<<std::endl;
    std::cout<<"The value pointed to by PTR "<<*PTR<<std::endl;
    std::cout<<"The value pointed to by REF "<<REF<<std::endl;
    return 0;
}
