/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:14:29 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 14:17:15 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};

	virtual ISpaceMarine	*clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;
};

