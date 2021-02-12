/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:36:21 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:53:22 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) :
_name(name), _size(0)
{}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < _size; ++i)
		delete (_inv[i]);
}

const std::string &Character::name() const
{
	return (_name);
}

void Character::equip(AMateria *materia)
{
	if (!materia || _size == _capacity)
		return ;
	for (int i = 0; i < _size; ++i)
		if (_inv[i] == materia)
			return ;
	_inv[_size++] = materia;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= _size)
		return ;
	_inv[idx] = NULL;
	--_size;
	for (int i = idx + 1; i < _size; ++i)
		_inv[i - 1] = _inv[i];
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < _size)
		_inv[idx]->use(target);
}

Character &Character::operator=(const Character &o)
{
	if (this == &o)
		return (*this);
	for (int i = 0; i < _size; ++i)
		delete (_inv[i]);
	_name = o._name;
	_size = o._size;
	for (int i = 0; i < _size; ++i)
		_inv[i] = o._inv[i]->clone();
	return (*this);
}
