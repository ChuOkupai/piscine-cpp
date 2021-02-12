/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:22:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:21:36 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

void ScavTrap::init()
{
	level = 1;
	hit = 100;
	maxHit = 100;
	energy = 50;
	maxEnergy = 50;
	melee = 20;
	ranged = 15;
	armor = 3;
	quote("Recompiling my combat code!");
}

std::ostream &ScavTrap::log()
{
	return (std::cout << " * ScavTrap " << name << ' ');
}

void ScavTrap::quote(const std::string &content)
{
	std::cout << '<' << name << " (ScavTrap)> " << content << std::endl;
}

ScavTrap::ScavTrap() : name("SC4V-TP")
{
	init();
}

ScavTrap::ScavTrap(const std::string &name) : name(name)
{
	init();
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	quote("This is no time to be lazy!");
}

ScavTrap::~ScavTrap()
{
	quote("I'm leaking!");
}

void ScavTrap::rangedAttack(const std::string &target)
{
	log() << "attacks " << target << " at range, causing " << ranged
	<< " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	log() << "attacks " << target << " at melee, causing " << melee
	<< " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned amount)
{
	if (amount > armor)
	{
		amount -= armor;
		if (amount > hit)
			amount = hit;
		hit -= amount;
		log() << "took " << amount << " damage!" << std::endl;
	}
	else
		log() << "did not take any damage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned amount)
{
	if (amount > maxHit)
		amount = maxHit;
	if (hit + amount > maxHit)
		amount = maxHit - hit;
	hit += amount;
	log() << "has been fixed (+" << amount << " hp)" << std::endl;
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

ScavTrap &ScavTrap::operator=(const ScavTrap &o)
{
	name = o.name;
	level = o.level;
	hit = o.hit;
	maxHit = o.maxHit;
	energy = o.energy;
	maxEnergy = o.maxEnergy;
	melee = o.melee;
	ranged = o.ranged;
	armor = o.armor;
	return (*this);
}
