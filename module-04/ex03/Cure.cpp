/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:32:06 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 12:34:02 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure &other) : AMateria(other)
{}

Cure::~Cure()
{}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.name() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	AMateria::operator=(other);
	return (*this);
}
