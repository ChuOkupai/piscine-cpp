/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 14:19:16 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 14:46:08 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// MateriaSource: constructor
	IMateriaSource	*src = new MateriaSource();

	// MateriaSource: learnMateria
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	delete (ice);
	delete (cure);

	// MateriaSource: createMateria
	ice = src->createMateria("ice");
	cure = src->createMateria("cure");

	// MateriaSource: destructor
	delete (src);

	// Character: constructor
	ICharacter	*geralt = new Character("Geralt of Rivia");
	ICharacter	*bob = new Character("Bob");

	// Character: equip
	geralt->equip(ice);
	geralt->equip(ice); // do nothing
	geralt->equip(cure);

	// Character: use
	geralt->use(0, *bob);
	geralt->use(1, *bob);
	geralt->use(2, *bob); // do nothing

	// Character: unequip
	geralt->unequip(0);
	geralt->unequip(1);
	geralt->unequip(2); // do nothing

	// AMateria: destructor
	delete (ice);
	delete (cure);

	// Character: destructor
	delete (bob);
	delete (geralt);

	return (0);
}
