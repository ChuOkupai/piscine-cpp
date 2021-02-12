/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:37:05 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:20:42 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." <<  std::endl;
}

Peon::Peon(const Peon &other) : Victim(other)
{}

Peon::~Peon()
{
	std::cout << "Bleuark.." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon &Peon::operator=(const Peon &other)
{
	Victim::operator=(other);
	return (*this);
}
