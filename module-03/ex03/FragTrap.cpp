/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:46 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:44:38 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

void FragTrap::init()
{
	type = "FragTrap";
	hit = 100;
	maxHit = 100;
	energy = 100;
	maxEnergy = 100;
	melee = 30;
	ranged = 20;
	armor = 5;
	quote("Hey everybody! Check out my package!");
}

FragTrap::FragTrap() : ClapTrap("FR4G-TP")
{
	init();
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	init();
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	quote("This time it'll be awesome, I promise!");
}

FragTrap::~FragTrap()
{
	quote("I'll die the way I lived: annoying!");
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

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}
