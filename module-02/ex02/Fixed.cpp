/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 22:53:15 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 17:29:27 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

#define FIXED_DIVISOR	(1 << frac)

Fixed::Fixed() : value(0)
{}

Fixed::Fixed(int value) : value(value << frac)
{}

Fixed::Fixed(float value) : value(roundf(value * FIXED_DIVISOR))
{}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits() const
{
	return (value);
}

void Fixed::setRawBits(const int raw)
{
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

bool Fixed::operator>(const Fixed &f) const
{
	return (value > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f) const
{
	return (value < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const
{
	return (value >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const
{
	return (value <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const
{
	return (value == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const
{
	return (value != f.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &f)
{
	value = f.getRawBits();
	return (*this);
}
Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed r;

	r.setRawBits(value + f.getRawBits());
	return (r);
}

Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed r;

	r.setRawBits(value - f.getRawBits());
	return (r);
}

Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed r;

	r.setRawBits((long)value * f.getRawBits() / FIXED_DIVISOR);
	return (r);
}

Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed r;

	r.setRawBits(((long)value * FIXED_DIVISOR) / f.getRawBits());
	return (r);
}

Fixed &Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f(*this);

	operator++();
	return (f);
}

Fixed &Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed f(*this);

	operator--();
	return (f);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
	return (stream << f.toFloat());
}

const Fixed &min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
