/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:22:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:45:22 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

void ScavTrap::init()
{
	type = "ScavTrap";
	hit = 100;
	maxHit = 100;
	energy = 50;
	maxEnergy = 50;
	melee = 20;
	ranged = 15;
	armor = 3;
	quote("Recompiling my combat code!");
}

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP")
{
	init();
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	init();
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	quote("This is no time to be lazy!");
}

ScavTrap::~ScavTrap()
{
	quote("I'm leaking!");
}

void ScavTrap::challengeNewcomer()
{
	static const std::string t[] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
	};

	quote(t[std::rand() % (sizeof(t) / sizeof(*t))]);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}
