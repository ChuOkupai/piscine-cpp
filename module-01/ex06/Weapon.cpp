/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 02:03:41 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 17:59:46 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string &Weapon::type() const
{
	return (_type);
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
