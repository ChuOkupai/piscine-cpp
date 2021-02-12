/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:10:12 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 11:55:06 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};

	virtual int				count() const = 0;
	virtual ISpaceMarine	*unit(int index) const = 0;

	virtual int				push(ISpaceMarine *spaceMarine) = 0;
};

