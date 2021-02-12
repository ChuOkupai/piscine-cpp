/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:28:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 14:08:04 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstring>
#include "Squad.hpp"

Squad::Squad() :
_tab(NULL), _capacity(0), _count(0)
{}

Squad::Squad(const Squad &other) :
_tab(NULL), _capacity(0), _count(0)
{
	*this = other;
}

Squad::~Squad()
{
	for (int i = 0; i < _count; ++i)
		delete (_tab[i]);
	if (_tab)
		delete[] (_tab);
}

int Squad::count() const
{
	return (_count);
}

ISpaceMarine *Squad::unit(int i) const
{
	return (i < 0 || i >= _count ? NULL : _tab[i]);
}

int Squad::push(ISpaceMarine *s)
{
	if (!s)
		return (_count);
	for (int i = 0; i < _count; ++i)
		if (s == _tab[i])
			return (_count);
	if (_count == _capacity)
	{
		_capacity = _capacity ? 2 * _capacity : _capacityMin;
		ISpaceMarine **temp = new ISpaceMarine *[_capacity];
		std::memcpy(temp, _tab, _count * sizeof(ISpaceMarine*));
		delete[] (_tab);
		_tab = temp;
	}
	_tab[_count++] = s;
	return (_count);
}

Squad &Squad::operator=(const Squad &o)
{
	if (this == &o)
		return (*this);
	for (int i = 0; i < _count; ++i)
		delete (_tab[i]);
	if (_tab && _capacity < o._capacity)
		delete[] (_tab);
	else
		_tab = new ISpaceMarine *[o._capacity];
	_capacity = o._capacity;
	_count = o.count();
	for (int i = 0; i < _count; ++i)
		_tab[i] = o.unit(i)->clone();
	return (*this);
}
