/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:07:02 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/01 15:34:00 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};

	virtual void		learnMateria(AMateria *materia) = 0;
	virtual AMateria	*createMateria(const std::string &type) = 0;
};
