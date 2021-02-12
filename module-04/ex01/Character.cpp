/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:03:39 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:27:15 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#define MAX_AP	40

Character::Character(const std::string &name) :
_name(name), _ap(MAX_AP), _weapon(NULL)
{}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{}

const std::string &Character::name() const
{
	return (_name);
}

int Character::ap() const
{
	return (_ap);
}

const AWeapon *Character::weapon() const
{
	return (_weapon);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > MAX_AP)
		_ap = MAX_AP;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *target)
{
	if (!_weapon || !target)
		return ;
	std::cout << _name;
	if (_weapon->apCost() > _ap)
	{
		std::cout << " does not have enough AP to attack " << target->type()
		<< '!' << std::endl;
		return ;
	}
	std::cout << " attacks " << target->type() << " with a " << _weapon->name()
	<< std::endl;
	_ap -= _weapon->apCost();
	_weapon->attack();
	target->takeDamage(_weapon->damage());
	if (target->hp() < 1)
		delete (target);
}

Character &Character::operator=(const Character &o)
{
	_name = o._name;
	_ap = o._ap;
	_weapon = o._weapon;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Character &c)
{
	const AWeapon *w = c.weapon();

	stream << c.name() << " has " << c.ap() << " AP and ";
	if (w)
		stream << "wields a " << w->name();
	else
		stream << "is unarmed";
	return (stream << std::endl);
}
