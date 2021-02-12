/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:19:35 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 13:56:06 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cerrno>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include "Scalar.hpp"
#include "utility.hpp"

bool Scalar::inBounds(long min, long max) const
{
	long v = static_cast<long>(_value);
	return (v >= min && v <= max);
}

const char* Scalar::ImpossibleConversion::what() const throw()
{
	return ("impossible");
}

const char* Scalar::InvalidArgument::what() const throw()
{
	return (std::strerror(EINVAL));
}

const char* Scalar::NotDisplayable::what() const throw()
{
	return ("Not displayable");
}

Scalar::Scalar(const char *s) : _value(0)
{
	char *end;

	if (!s || std::isspace(*s))
		throw (InvalidArgument());
	if (std::isprint(*s) && !std::isdigit(*s) && !s[1])
		_value = *s;
	else
	{
		errno = 0;
		_value = std::strtod(s, &end);
		if (errno || (*end && (*end != 'f' || end[1] ||
		!isCompleteFloatingPoint(s))))
			throw (InvalidArgument());
	}
}

Scalar::Scalar(const Scalar &other)
{
	*this = other;
}

Scalar::~Scalar()
{}

Scalar::operator char() const
{
	if (std::isinf(_value) || std::isnan(_value) ||
	!inBounds(std::numeric_limits<char>::min(),
	std::numeric_limits<char>::max()))
		throw (ImpossibleConversion());
	char c = static_cast<char>(_value);
	if (!std::isprint(c))
		throw (NotDisplayable());
	return (c);
}

Scalar::operator double() const
{
	return (_value);
}

Scalar::operator float() const
{
	float f = static_cast<float>(_value);
	if ((!f && _value) || (std::isinf(f) && !std::isinf(_value)))
		throw (ImpossibleConversion());
	return (f);
}

Scalar::operator int() const
{
	if (std::isinf(_value) || std::isnan(_value) ||
	!inBounds(std::numeric_limits<int>::min(),
	std::numeric_limits<int>::max()))
		throw (ImpossibleConversion());
	return (static_cast<int>(_value));
}

Scalar &Scalar::operator=(const Scalar &other)
{
	_value = other._value;
	return (*this);
}
