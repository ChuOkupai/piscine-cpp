/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:35:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 16:18:26 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(const std::string &name);
	Peon(const Peon &other);
	virtual ~Peon();

	void	getPolymorphed() const;

	Peon	&operator=(const Peon &other);
};
