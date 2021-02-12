/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:15:18 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:09:07 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!"
	<<  std::endl;
}

Victim::Victim(const Victim &other)
{
	*this = other;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!"
	<< std::endl;
}

const std::string &Victim::name() const
{
	return (_name);
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!"
	<< std::endl;
}

Victim &Victim::operator=(const Victim &o)
{
	_name = o._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Victim &victim)
{
	stream << "I'm " << victim.name() << " and I like otters!" << std::endl;
	return (stream);
}
