/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:03:19 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 13:25:24 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

	Character();

public:
	Character(const std::string &name);
	Character(const Character &other);
	~Character();

	const std::string	&name() const;
	int					ap() const;
	const AWeapon		*weapon() const;

	void	recoverAP();
	void	equip(AWeapon *weapon);
	void	attack(Enemy *target);

	Character	&operator=(const Character &other);
};

std::ostream	&operator<<(std::ostream &stream, const Character &character);
