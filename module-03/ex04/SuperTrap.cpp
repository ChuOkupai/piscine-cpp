/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:39:59 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/31 13:10:48 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "SuperTrap.hpp"

void SuperTrap::init()
{
	type = "SuperTrap";
	hit = 100;
	maxHit = 100;
	energy = 120;
	maxEnergy = 120;
	melee = 60;
	ranged = 20;
	armor = 5;
	quote("Resequencing combat protocols!");
}

SuperTrap::SuperTrap() : ClapTrap("SUP3R-TP")
{
	init();
}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name)
{
	init();
}

SuperTrap::SuperTrap(const SuperTrap &other) :
ClapTrap(other), FragTrap(other), NinjaTrap(other)
{
	quote("Knock-knock.");
}

SuperTrap::~SuperTrap()
{
	quote("I'm too pretty to die!");
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap &SuperTrap::operator=(const SuperTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}
