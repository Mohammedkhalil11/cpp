/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:28:02 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/30 16:42:27 by mokhalil         ###   ########.fr       */
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
    fixed = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int number)
{
    fixed = number << number_fractionnal_bits;
    std::cout<<"int constructor called"<<std::endl;
}

Fixed::Fixed(const float number)
{
    fixed = roundf(number * ((float)(1 << number_fractionnal_bits)));
    std::cout<<"float constructor called"<<std::endl;
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

 bool Fixed::operator<(const Fixed &number)
 {
    return(fixed < number.getRawBits());
 }
 bool Fixed::operator<=(const Fixed &number)
 {
    return(fixed <= number.getRawBits());
 }
 bool Fixed::operator>(const Fixed &number)
 {
    return(this->fixed > number.getRawBits());
 }
 bool Fixed::operator>=(const Fixed &number)
 {
    return(this->fixed >= number.getRawBits());
 }
 bool Fixed::operator==(const Fixed &number)
 {
    return(fixed == number.getRawBits());
 }
 bool Fixed::operator!=(const Fixed &number)
 {
    return(fixed != number.getRawBits());
 }

Fixed Fixed::operator+(const Fixed &number)
{
   return Fixed(this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(const Fixed &number)
{
   return Fixed(this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(const Fixed &number)
{
   return Fixed(this->toFloat() * number.toFloat()) / (float)(1 << number_fractionnal_bits);
}

Fixed Fixed::operator/(const Fixed &number)
{
    if (number.toFloat() != 0)
    {
        float a = (this->toFloat() / number.toFloat()) * (float)(1 << number_fractionnal_bits);
        return Fixed(a);
    }return (0);
}

//pre-increment
Fixed& Fixed::operator++()
{
    fixed = fixed + (float)(1);
    return *this;
}

//post-increment
Fixed Fixed::operator++(int) {
     Fixed temp(*this);
    ++(*this);
    return temp;
}

// Decrement operators
Fixed& Fixed::operator--() {
     fixed = fixed - (float)(1);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed &Fixed::max(Fixed &number1, Fixed &number2)
{
    if (number1 > number2)
        return (number1);
    return (number2);
}
Fixed &Fixed::min(Fixed &number1, Fixed &number2)
{
    if (number1 <= number2)
        return (number1);
    return (number2);
}
const Fixed &Fixed::max(Fixed const &number1, Fixed const &number2)
{
    if (number1.toFloat() > number2.toFloat())
        return (number1);
    return (number2);
}
const Fixed &Fixed::min(Fixed const &number1, Fixed const &number2)
{
    if (number1.toFloat() < number2.toFloat())
        return (number1);
    return (number2);
}