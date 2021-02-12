/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:48:25 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/31 12:39:47 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "NinjaTrap.hpp"

void NinjaTrap::init()
{
	type = "NinjaTrap";
	hit = 60;
	maxHit = 60;
	energy = 120;
	maxEnergy = 120;
	melee = 60;
	ranged = 5;
	armor = 0;
	quote("I'm a robot ninja...");
}

NinjaTrap::NinjaTrap() : ClapTrap("N1NJ4-TP")
{
	init();
}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name)
{
	init();
}

NinjaTrap::NinjaTrap(const NinjaTrap &other) : ClapTrap(other)
{
	quote("This is no time to be lazy!");
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	quote("Take that!");
	target.takeDamage((std::rand() % melee) + 1);
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	quote("Get ready for some Fragtrap face time!");
	target.takeDamage((std::rand() % melee) + 1);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	quote("Heyyah!");
	target.takeDamage((std::rand() % melee) + 1);
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	quote("Hyah!");
	target.takeDamage((std::rand() % melee) + 1);
}

NinjaTrap::~NinjaTrap()
{
	quote("Robot down!");
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &f)
{
	ClapTrap::operator=(f);
	return (*this);
}
