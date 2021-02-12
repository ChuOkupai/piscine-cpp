/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:13:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 14:39:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _size(0)
{}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < _size; ++i)
		delete (_inv[i]);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia || _size == _capacity)
		return ;
	_inv[_size++] = materia->clone();
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (size_t i = 0; i < _size; ++i)
		if (_inv[i]->type() == type)
			return (_inv[i]->clone());
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &o)
{
	if (this == &o)
		return (*this);
	for (size_t i = 0; i < _size; ++i)
		delete (_inv[i]);
	_size = o._size;
	for (size_t i = 0; i < _size; ++i)
		_inv[i] = o._inv[i]->clone();
	return (*this);
}
