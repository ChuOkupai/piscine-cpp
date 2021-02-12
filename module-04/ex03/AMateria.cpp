/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:16:03 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 15:22:10 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type) :
_type(type), _xp(0)
{}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{
	*this = other;
}

AMateria::~AMateria()
{}

const std::string &AMateria::type() const
{
	return (_type);
}

unsigned AMateria::xp() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	_xp = other._xp;
	return (*this);
}
