/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:27:50 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/22 15:48:55 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRED_HPP
#define FIRED_HPP

#include<iostream>
#include<string>

class Fixed
{
    private :
        int fixed;
        static const int number_fractionnal_bits;
    public :
        Fixed();
        Fixed(const Fixed &fixed2);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif