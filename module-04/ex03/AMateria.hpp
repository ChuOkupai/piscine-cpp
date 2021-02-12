/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:27:47 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 15:30:09 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class AMateria
{
private:
	const std::string	_type;
	unsigned			_xp;

	AMateria();

public:
	AMateria(const std::string &type);
	AMateria(const AMateria &other);
	virtual ~AMateria();

	const std::string	&type() const;
	unsigned			xp() const;

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);

	AMateria	&operator=(const AMateria &other);
};

