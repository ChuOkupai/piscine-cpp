/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:46 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 16:21:42 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

void FragTrap::init()
{
	level = 1;
	hit = 100;
	maxHit = 100;
	energy = 100;
	maxEnergy = 100;
	melee = 30;
	ranged = 20;
	armor = 5;
	quote("Hey everybody! Check out my package!");
}

std::ostream &FragTrap::log()
{
	return (std::cout << " * FragTrap " << name << ' ');
}

void FragTrap::quote(const std::string &content)
{
	std::cout << '<' << name << " (FragTrap)> " << content << std::endl;
}

FragTrap::FragTrap() : name("FR4G-TP")
{
	init();
}

FragTrap::FragTrap(const std::string &name) : name(name)
{
	init();
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	quote("This time it'll be awesome, I promise!");
}

FragTrap::~FragTrap()
{
	quote("I'll die the way I lived: annoying!");
}

void FragTrap::rangedAttack(const std::string &target)
{
	log() << "attacks " << target << " at range, causing " << ranged
	<< " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	log() << "attacks " << target << " at melee, causing " << melee
	<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned amount)
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

void FragTrap::beRepaired(unsigned amount)
{
	if (amount > maxHit)
		amount = maxHit;
	if (hit + amount > maxHit)
		amount = maxHit - hit;
	hit += amount;
	log() << "has been repaired (+" << amount << " hp)" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	static const std::string t[] = {
		"Place your bets!",
		"Defragmenting!",
		"Running the sequencer!",
		"It's about to get magical!",
		"Things are about to get awesome!"
	};

	log() << ">run vaulthunter.exe" << std::endl;
	if (energy < 25)
		log() << ">failure..." << std::endl;
	else
	{
		energy -= 25;
		quote(t[std::rand() % (sizeof(t) / sizeof(*t))]);
		log() << "hit " << target << ", causing " << (std::rand() % ranged) + 1
		<< " points of damage!" << std::endl;
	}
}

FragTrap &FragTrap::operator=(const FragTrap &o)
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
