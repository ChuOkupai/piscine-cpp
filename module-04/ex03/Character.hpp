/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:35:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 14:05:29 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	static const int	_capacity = 4;

	std::string	_name;
	AMateria	*_inv[_capacity];
	int			_size;

	Character();

public:
	Character(const std::string &name);
	Character(const Character &other);
	virtual ~Character();

	const std::string	&name() const;

	void	equip(AMateria *materia);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

	Character	&operator=(const Character &other);
};

