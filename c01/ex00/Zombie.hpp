/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:40:58 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 01:49:04 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include<iostream>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    Zombie(std::string name);
    ~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif