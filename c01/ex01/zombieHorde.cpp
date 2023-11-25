/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:55:54 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 22:37:48 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *foo;

    if (N > 0)
    {
        foo = new Zombie[N];
        for(int i = 0; i< N; i++)
        foo[i] = Zombie(name);
        return(foo);
    }
    return(NULL);
}