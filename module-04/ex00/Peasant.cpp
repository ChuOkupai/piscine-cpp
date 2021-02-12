/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:10:09 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:22:48 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

Peasant::Peasant(const std::string &name) : Victim(name)
{
	std::cout << "I want to be on the right side." <<  std::endl;
}

Peasant::Peasant(const Peasant &other) : Victim(other)
{}

Peasant::~Peasant()
{
	std::cout << "Ribbit." << std::endl;
}

void Peasant::getPolymorphed() const
{
	std::cout << _name << " has been turned into a greenish frog!" << std::endl;
}

Peasant &Peasant::operator=(const Peasant &other)
{
	Victim::operator=(other);
	return (*this);
}
