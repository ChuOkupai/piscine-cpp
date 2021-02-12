/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:45:25 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 15:02:33 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type("Zombie")
{}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(const std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(const std::string name)
{
	return (new Zombie(name, _type));
}

Zombie ZombieEvent::randomChump()
{
	static const std::string t[] =
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
	Zombie z(t[std::rand() % (sizeof(t) / sizeof(*t))], _type);

	z.announce();
	return (z);
}
