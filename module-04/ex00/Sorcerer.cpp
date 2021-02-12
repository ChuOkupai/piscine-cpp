/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:21:46 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:02:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
_name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	*this = other;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::name() const
{
	return (_name);
}

const std::string &Sorcerer::title() const
{
	return (_title);
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

Sorcerer &Sorcerer::operator=(const Sorcerer &o)
{
	_name = o._name;
	_title = o._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Sorcerer &sorcerer)
{
	stream << "I am " << sorcerer.name() << ", " << sorcerer.title()
	<< ", and I like ponies!" << std::endl;
	return (stream);
}
