/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:12:05 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/29 18:38:12 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *Uzi;
    public:
        HumanB(std::string Name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& newWeapon);
};

#endif