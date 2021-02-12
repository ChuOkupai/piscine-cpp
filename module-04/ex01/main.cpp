/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:49 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:56:10 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Killithid.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "YariLauncher.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

int main()
{
	beginTest("constructors");
	Character	me("John Rambo");
	Enemy		*rs = new RadScorpion();
	Enemy		*kt = new Killithid();
	Enemy		*kt2 = new Killithid();
	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();
	AWeapon		*yl = new YariLauncher();

	beginTest("equip");
	std::cout << me;
	me.equip(pr);
	std::cout << me;
	me.equip(pf);
	std::cout << me;

	beginTest("attack");
	me.attack(rs);
	std::cout << me;
	me.equip(pr);
	std::cout << me;
	me.attack(rs);
	std::cout << me;
	me.attack(rs); // must kill enemy
	std::cout << me;

	beginTest("custom enemy and weapon");
	me.equip(yl);
	std::cout << me;
	me.attack(kt); // must kill enemy
	std::cout << me;

	beginTest("attack with no enough ap and recoverAP");
	me.attack(kt2); // must fail
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.recoverAP();
	std::cout << me;
	me.attack(kt2); // must kill enemy

	delete (pr);
	delete (pf);
	delete (yl);
	return (0);
}
