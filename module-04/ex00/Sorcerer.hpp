/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:21:43 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/29 15:39:50 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;

	Sorcerer();

public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &other);
	~Sorcerer();

	const std::string	&name() const;
	const std::string	&title() const;

	void	polymorph(const Victim &victim) const;

	Sorcerer	&operator=(const Sorcerer &other);
};

std::ostream	&operator<<(std::ostream &stream, const Sorcerer &sorcerer);
