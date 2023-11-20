/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:28:02 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/20 01:32:33 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &COUT, const Fixed &number)
{
    COUT<<number.toFloat()<<std::endl;
    return (COUT);
}

Fixed::Fixed(const Fixed &fixed2)
{
    if (&fixed2)
    {
        this->fixed = fixed2.fixed;
        std::cout<<"Copy constructor called"<<std::endl;
    }
}

Fixed & Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
    {
        this->fixed = obj.fixed;
        std::cout<<"Copy assignment operator called "<<std::endl;
	}
	return (*this);
}

Fixed::Fixed()
{
    fixed = 0 << number_fractionnal_bits;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int number)
{
    fixed = number << number_fractionnal_bits;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const float number)
{
    fixed = roundf(number * ((float)(1 << number_fractionnal_bits)));
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

void Fixed::setRawBits( int const raw )
{
	fixed = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (fixed);
}

float Fixed::toFloat( void ) const
{
    return (float) fixed / (float)(1 << number_fractionnal_bits);
}

int Fixed::toInt( void ) const
{
    return (fixed >> number_fractionnal_bits);
}