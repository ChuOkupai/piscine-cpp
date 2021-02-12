/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:38:06 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 12:10:30 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AWeapon
{
private:
	std::string	_name;
	int			_apCost;
	int			_damage;

	AWeapon();

public:
	AWeapon(const std::string &name, int apCost, int damage);
	AWeapon(const AWeapon &other);
	virtual ~AWeapon();

	const std::string	&name() const;
	int					apCost() const;
	int					damage() const;

	virtual void	attack() const = 0;

	AWeapon	&operator=(const AWeapon &other);
};

