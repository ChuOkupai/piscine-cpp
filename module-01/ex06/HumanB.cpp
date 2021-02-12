/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 02:04:26 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 18:00:22 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) :
_name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack() const
{
	if (!_weapon)
		return ;
	std::cout << _name << " attacks with his " << _weapon->type() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
