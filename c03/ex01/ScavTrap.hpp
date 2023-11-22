/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 02:54:05 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 14:54:36 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &obj);\
		void attack(const std::string& target);
		void guardGate();
};

#endif