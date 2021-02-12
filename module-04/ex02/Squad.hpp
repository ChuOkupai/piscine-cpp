/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:22:12 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 11:55:36 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	static const int	_capacityMin = 1 << 2;

	ISpaceMarine	**_tab;
	int				_capacity;
	int				_count;

public:
	Squad();
	Squad(const Squad &other);
	virtual ~Squad();

	int				count() const;
	ISpaceMarine	*unit(int index) const;

	int				push(ISpaceMarine *spaceMarine);

	Squad	&operator=(const Squad &other);
};

