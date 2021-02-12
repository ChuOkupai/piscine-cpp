/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:13:11 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 14:59:45 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const size_t	_capacity = 4;

	AMateria	*_inv[_capacity];
	size_t		_size;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	virtual ~MateriaSource();

	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(const std::string &type);

	MateriaSource	&operator=(const MateriaSource &other);
};

