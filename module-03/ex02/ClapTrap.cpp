/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:19:37 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 17:54:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

void ClapTrap::init()
{
	type = "ClapTrap";
	level = 1;
	hit = 0;
	maxHit = 0;
	energy = 0;
	maxEnergy = 0;
	melee = 0;
	ranged = 0;
	armor = 0;
	quote("Booting sequence complete.");
}

std::ostream &ClapTrap::log()
{
	return (std::cout << " * " << type << " " << name << ' ');
}

void ClapTrap::quote(const std::string &content)
{
	std::cout << '<' << name << " (" << type << ")> " << content << std::endl;
}

ClapTrap::ClapTrap() : name("CL4P-TP")
{
	init();
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
	init();
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	quote("Glitching weirdness is a term of endearment, right?");
}

ClapTrap::~ClapTrap()
{
	quote("I'M DEAD I'M DEAD OHMYGOD I'M DEAD!");
}

void ClapTrap::rangedAttack(const std::string &target)
{
	log() << "attacks " << target << " at range, causing " << ranged
	<< " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	log() << "attacks " << target << " at melee, causing " << melee
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned amount)
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
		log() << "did not take any damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned amount)
{
	if (amount > maxHit)
		amount = maxHit;
	if (hit + amount > maxHit)
		amount = maxHit - hit;
	hit += amount;
	log() << "has been repaired (+" << amount << " hp)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &o)
{
	name = o.name;
	type = o.type;
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
