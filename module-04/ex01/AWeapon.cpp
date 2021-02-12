/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:38:03 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 12:10:19 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage) :
_name(name), _apCost(apCost), _damage(damage)
{}

AWeapon::AWeapon(const AWeapon &other)
{
	*this = other;
}

AWeapon::~AWeapon()
{}

const std::string &AWeapon::name() const
{
	return (_name);
}

int AWeapon::apCost() const
{
	return (_apCost);
}

int AWeapon::damage() const
{
	return (_damage);
}

AWeapon &AWeapon::operator=(const AWeapon &o)
{
	_name = o._name;
	_apCost = o._apCost;
	_damage = o._damage;
	return (*this);
}
