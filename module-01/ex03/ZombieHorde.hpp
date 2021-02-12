/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:54:55 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 14:30:40 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_horde;
	size_t	_size;

public:
	ZombieHorde(size_t n);
	~ZombieHorde();

	void	announce() const;
};
