/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:15:00 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:39:53 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Victim
{
private:
	Victim();

protected:
	std::string	_name;

public:
	Victim(const std::string &name);
	Victim(const Victim &other);
	virtual ~Victim();

	const std::string	&name() const;

	virtual void	getPolymorphed() const;

	Victim	&operator=(const Victim &other);
};

std::ostream	&operator<<(std::ostream &stream, const Victim &victim);
