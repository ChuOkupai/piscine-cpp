/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:55:01 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:05:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(size_t n) :
_horde(new Zombie[n]), _size(n)
{}

ZombieHorde::~ZombieHorde()
{
	delete[] (_horde);
}

void	ZombieHorde::announce() const
{
	for (size_t i = 0; i < _size; ++i)
		_horde[i].announce();
}
