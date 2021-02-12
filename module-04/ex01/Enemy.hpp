/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:09:13 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 12:14:45 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Enemy
{
private:
	std::string	_type;
	int			_hp;

	Enemy();

public:
	Enemy(const std::string &type, int hp);
	Enemy(const Enemy &other);
	virtual ~Enemy();

	const std::string	&type() const;
	int					hp() const;

	virtual void	takeDamage(int amount);

	Enemy	&operator=(const Enemy &other);
};

