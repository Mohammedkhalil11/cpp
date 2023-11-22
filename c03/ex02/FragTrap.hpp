/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:15:04 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 18:56:03 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		~FragTrap();
		FragTrap &operator=(const FragTrap &obj);
        void highFivesGuys(void);
        void attack(const std::string& target);
};
#endif