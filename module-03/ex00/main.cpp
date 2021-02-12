/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:49 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/31 12:58:32 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "FragTrap.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testFragTrap()
{
	beginTest("FragTrap: constructors");
	FragTrap t("Wheatley"); // constructor with custom name
	FragTrap t2; // default constructor
	FragTrap t3(t); // copy constructor

	beginTest("FragTrap: meleeAttack and rangedAttack");
	t.rangedAttack("Skag");
	t.meleeAttack("Spiderant");

	beginTest("FragTrap: beRepaired and takeDamage");
	t.beRepaired(1000); // + 0 hp
	t.takeDamage(5); // -0 hp
	t.takeDamage(50); // -45 hp
	t.takeDamage(65); // -55 hp, 0 hp left
	t.beRepaired(80); // + 80 hp
	t.beRepaired(30); // + 20 hp

	beginTest("FragTrap: vaulthunter_dot_exe");
	t.vaulthunter_dot_exe("Bandit");
	t.vaulthunter_dot_exe("Rakk");
	t.vaulthunter_dot_exe("Gatling Turret");
	t.vaulthunter_dot_exe("Drifter");
	t.vaulthunter_dot_exe("Tankenstein"); // must fail

	beginTest("FragTrap: destructors");
}

int main()
{
	std::srand(std::time(NULL));
	testFragTrap();
	return (0);
}
