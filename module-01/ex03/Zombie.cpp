/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:44:28 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:05:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

const std::string Zombie::generateRandomName()
{
	static std::string t[] =
	{
		"Blister",
		"Chompie",
		"Crusher",
		"Decom",
		"Famie",
		"Floatie",
		"Foul",
		"Gnawie",
		"Gorge",
		"Gorger",
		"Gorgie",
		"Gutsie",
		"Hogwash",
		"Loony",
		"Mort",
		"Mouthie",
		"Rot",
		"Smelly",
		"Snackie",
		"Toothie",
		"Zomzom"
	};
	return (t[std::rand() % (sizeof(t) / sizeof(*t))]);
}

const std::string Zombie::generateRandomType()
{
	static std::string t[] =
	{
		"Biter",
		"Creeper",
		"Eater",
		"Floater",
		"Ghoul",
		"Herd",
		"Lame-Brain",
		"Lurker",
		"Monster",
		"Psycho",
		"Roamer",
		"Walker"
	};
	return (t[std::rand() % (sizeof(t) / sizeof(*t))]);
}

Zombie::Zombie() :
_name(generateRandomName()), _type(generateRandomType())
{}

Zombie::~Zombie()
{}

void Zombie::announce() const
{
	std::cout << '<' << _name << " (" << _type << ")> Braiiiiiiinnnssss..."
	<< std::endl;
}
