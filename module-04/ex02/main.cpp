/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 14:19:16 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 14:32:43 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

int main()
{
	ISquad *s = new Squad;

	beginTest("Squad: push");
	s->push(NULL); // do nothing
	for (int i = 0; i < 3; ++i)
	{
		s->push(new TacticalMarine);
		s->push(new AssaultTerminator);
	}
	s->push(s->unit(0)); // do nothing

	beginTest("Squad: count and unit");
	for (int i = 0; i < s->count(); ++i)
	{
		std::cout << "> ISpaceMarine " << i << ':' << std::endl;
		ISpaceMarine* cur = s->unit(i);
		cur->battleCry();
		if (i < 2) // avoid spam
		{
			cur->rangedAttack();
			cur->meleeAttack();
		}
	}

	beginTest("Squad: copy constructor");
	Squad s2(*static_cast<Squad*>(s));

	beginTest("Squad: destructor");
	delete (s); // must delete all units

	return (0);
}
