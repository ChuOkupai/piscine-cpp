/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:09:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 12:15:45 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(const std::string &type, int hp) :
_type(type), _hp(hp)
{}

Enemy::Enemy(const Enemy &other)
{
	*this = other;
}

Enemy::~Enemy()
{}

const std::string &Enemy::type() const
{
	return (_type);
}

int Enemy::hp() const
{
	return (_hp);
}

void Enemy::takeDamage(int amount)
{
	if (amount < 0 || !_hp)
		return ;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}

Enemy &Enemy::operator=(const Enemy &o)
{
	_type = o._type;
	_hp = o._hp;
	return (*this);
}
