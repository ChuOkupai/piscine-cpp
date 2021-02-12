/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:45:12 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:13:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;

public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(const std::string type);
	Zombie	*newZombie(const std::string name);
	Zombie	randomChump();
};
