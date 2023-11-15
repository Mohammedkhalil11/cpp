/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:11:14 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 05:25:38 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& weaponType);
    Weapon();
    ~Weapon();
    const std::string& getType() const;
    void setType(const std::string& newType);
};


#endif