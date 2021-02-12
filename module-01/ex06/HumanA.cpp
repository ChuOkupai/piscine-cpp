/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 02:03:58 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 17:59:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) :
_name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weapon.type() << std::endl;
}
