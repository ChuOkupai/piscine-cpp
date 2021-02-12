/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:19:51 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:39:39 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &other);
	virtual ~AssaultTerminator();

	AssaultTerminator	*clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;

	AssaultTerminator	&operator=(const AssaultTerminator &other);
};

