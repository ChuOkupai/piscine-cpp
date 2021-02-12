/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 22:53:15 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 14:47:49 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

#define FIXED_DIVISOR	(1 << frac)

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) : value(value << frac)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : value(roundf(value * FIXED_DIVISOR))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat() const
{
	return ((float)value / FIXED_DIVISOR);
}

int Fixed::toInt() const
{
	return (value >> frac);
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	value = f.value;
	return (*this);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &f)
{
	return (stream << f.toFloat());
}
