/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:43:49 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 02:25:57 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int hordeSize = 3;
    Zombie* zombieArmy;
    
    zombieArmy = zombieHorde(hordeSize, "HordeZombie");
    for (int i = 0; i < hordeSize; ++i)
        zombieArmy[i].announce();
    delete[]zombieArmy;
    return 0;
}
