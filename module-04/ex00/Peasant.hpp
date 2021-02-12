/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:11:13 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 16:18:34 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Victim.hpp"

class Peasant : public Victim
{
private:
	Peasant();

public:
	Peasant(const std::string &name);
	Peasant(const Peasant &other);
	virtual ~Peasant();

	void	getPolymorphed() const;

	Peasant	&operator=(const Peasant &other);
};
