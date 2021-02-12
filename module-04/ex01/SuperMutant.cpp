/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:52:02 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 13:11:49 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

#define BIRTH_MESSAGE	"Gaaah. Me want smash heads!"

SuperMutant::SuperMutant() : Enemy("Super Mutant", 170)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
	if (amount > 2)
		Enemy::takeDamage(amount - 3);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other)
{
	Enemy::operator=(other);
	return (*this);
}
