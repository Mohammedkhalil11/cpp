/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:28:02 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:39:36 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &fixed2)
{
    {
        this->fixed = fixed2.fixed;
        std::cout<<"Copy constructor called"<<std::endl;
    }
}

Fixed & Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
    {
        this->fixed = obj.getRawBits();
        std::cout<<"Copy assignment operator called "<<std::endl;
	}
	return (*this);
}

Fixed::Fixed()
{
    this->fixed = 0;
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