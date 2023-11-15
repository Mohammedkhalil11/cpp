/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:11:20 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/13 05:27:25 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &Akm;
        std::string name;
    public:
        HumanA(const std::string &Name, Weapon &A);
        ~HumanA();
        void attack();
};

#endif