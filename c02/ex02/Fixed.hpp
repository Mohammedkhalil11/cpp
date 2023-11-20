/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:27:50 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/20 02:08:10 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRED_HPP
#define FIRED_HPP

#include<iostream>
#include<string>
#include<cmath>

class Fixed
{
    private :
        int fixed;
        static const int number_fractionnal_bits = 8;
    public :
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const Fixed &fixed2);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator<(const Fixed &number);
        bool operator<=(const Fixed &number);
        bool operator>(const Fixed &number);
        bool operator>=(const Fixed &number);
        bool operator==(const Fixed &number);
        bool operator!=(const Fixed &number);
        Fixed operator+(const Fixed &number);
        Fixed operator-(const Fixed &number);
        Fixed operator*(const Fixed &number);
        Fixed operator/(const Fixed &number);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
};
std::ostream &operator<<(std::ostream &COUT, const Fixed &number);
#endif