/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:12:05 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 05:25:32 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *Uzi;
        std::string name;
    public:
        HumanB(std::string Name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& newWeapon);
};

#endif