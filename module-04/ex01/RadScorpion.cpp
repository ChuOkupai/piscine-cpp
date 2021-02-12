/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:57:46 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 12:10:40 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

#define BIRTH_MESSAGE	"* click click click *"

RadScorpion::RadScorpion() : Enemy("Rad Scorpion", 80)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &other)
{
	Enemy::operator=(other);
	return (*this);
}
