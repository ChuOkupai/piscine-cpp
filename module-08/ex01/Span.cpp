/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:05:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/12 17:27:32 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include "Span.hpp"

const char *Span::NoMoreSpaceLeft::what() const throw()
{
	return ("No more space left");
}

const char *Span::NoSpanFound::what() const throw()
{
	return ("No span found");
}

Span::Span(unsigned n) : _capacity(n), _size(0), _sorted(false), _v(n)
{}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{}

void Span::addNumber(int v)
{
	if (_capacity == _size)
		throw (NoMoreSpaceLeft());
	_v[_size++] = v;
	_sorted = false;
}

int Span::shortestSpan()
{
	if (_size < 2)
		throw (NoSpanFound());
	if (!_sorted)
	{
		std::sort(_v.begin(), _v.end());
		_sorted = true;
	}
	int min = abs(_v[1] - _v[0]);
	for (size_t i = 2; i < _size; ++i)
		min = std::min(min, abs(_v[i] - _v[i - 1]));
	return (min);
}

int Span::longestSpan()
{
	if (_size < 2)
		throw (NoSpanFound());
	if (!_sorted)
	{
		std::sort(_v.begin(), _v.end());
		_sorted = true;
	}
	return (*(_v.end() - 1) - _v[0]);
}

Span &Span::operator=(const Span &o)
{
	_capacity = o._capacity;
	_size = o._size;
	_sorted = o._sorted;
	_v = o._v;
	return (*this);
}
