/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 02:04:36 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:13:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	const std::string	_name;
	Weapon				*_weapon;

public:
	HumanB(const std::string &name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon &weapon);
};
