/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:22:29 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/31 13:00:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "SuperTrap.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testClapTrap()
{
	beginTest("ClapTrap: constructors");
	ClapTrap t("D3F4ULT-TP"); // constructor with custom name
	ClapTrap t2; // default constructor
	ClapTrap t3(t); // copy constructor

	beginTest("ClapTrap: meleeAttack and rangedAttack");
	t.rangedAttack("Skag");
	t.meleeAttack("Spiderant");

	beginTest("ClapTrap: beRepaired and takeDamage");
	t.beRepaired(10); // + 0 hp
	t.takeDamage(10); // 0 damage, 0 hp left
	t.beRepaired(10); // + 0 hp

	beginTest("ClapTrap: destructors");
}

static void testFragTrap()
{
	beginTest("FragTrap: constructors");
	FragTrap t("Wheatley"); // constructor with custom name
	FragTrap t2; // default constructor
	FragTrap t3(t2); // copy constructor


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

static void testNinjaTrap()
{
	beginTest("NinjaTrap: constructors");
	NinjaTrap t("N1nj4ss4ss1n"); // constructor with custom name
	NinjaTrap t2; // default constructor
	NinjaTrap t3(t); // copy constructor

	beginTest("NinjaTrap: meleeAttack and rangedAttack");
	t.rangedAttack("Skag");
	t.meleeAttack("Spiderant");

	beginTest("NinjaTrap: beRepaired and takeDamage");
	t.beRepaired(1000); // + 0 hp
	t.takeDamage(50); // -50 hp
	t.takeDamage(20); // -10 hp, 0 hp left
	t.beRepaired(30); // + 30 hp
	t.beRepaired(40); // + 30 hp

	beginTest("NinjaTrap: ninjaShoebox");
	{
		ClapTrap clapTrap("TARGET");
		t.ninjaShoebox(clapTrap);
	}
	{
		FragTrap fragTrap("TARGET");
		t.ninjaShoebox(fragTrap);
	}
	{
		NinjaTrap ninjaTrap("TARGET");
		t.ninjaShoebox(ninjaTrap);
	}
	{
		ScavTrap ScavTrap("TARGET");
		t.ninjaShoebox(ScavTrap);
	}

	beginTest("NinjaTrap: destructors");
}

static void testScavTrap()
{
	beginTest("ScavTrap: constructors");
	ScavTrap t("Sc4v3ng3r"); // constructor with custom name
	ScavTrap t2; // default constructor
	ScavTrap t3(t); // copy constructor

	beginTest("ScavTrap: meleeAttack and rangedAttack");
	t.rangedAttack("Skag");
	t.meleeAttack("Spiderant");

	beginTest("ScavTrap: beRepaired and takeDamage");
	t.beRepaired(1000); // + 0 hp
	t.takeDamage(3); // -0 hp
	t.takeDamage(50); // -45 hp
	t.takeDamage(65); // -55 hp, 0 hp left
	t.beRepaired(80); // + 80 hp
	t.beRepaired(30); // + 20 hp

	beginTest("ScavTrap: challengeNewcomer");
	t.challengeNewcomer();
	t.challengeNewcomer();
	t.challengeNewcomer();

	beginTest("ScavTrap: destructors");
}

static void testSuperTrap()
{
	beginTest("SuperTrap: constructors");
	SuperTrap t("T3rm1n4tr4p"); // constructor with custom name
	SuperTrap t2; // default constructor
	SuperTrap t3(t); // copy constructor


	beginTest("SuperTrap: meleeAttack and rangedAttack");
	t.rangedAttack("Skag");
	t.meleeAttack("Spiderant");

	beginTest("SuperTrap: beRepaired and takeDamage");
	t.beRepaired(1000); // + 0 hp
	t.takeDamage(5); // -0 hp
	t.takeDamage(50); // -45 hp
	t.takeDamage(65); // -55 hp, 0 hp left
	t.beRepaired(80); // + 80 hp
	t.beRepaired(30); // + 20 hp

	beginTest("SuperTrap: ninjaShoebox");
	{
		ClapTrap clapTrap("TARGET");
		t.ninjaShoebox(clapTrap);
	}
	{
		FragTrap fragTrap("TARGET");
		t.ninjaShoebox(fragTrap);
	}
	{
		NinjaTrap ninjaTrap("TARGET");
		t.ninjaShoebox(ninjaTrap);
	}
	{
		ScavTrap ScavTrap("TARGET");
		t.ninjaShoebox(ScavTrap);
	}

	beginTest("SuperTrap: vaulthunter_dot_exe");
	t.vaulthunter_dot_exe("Bandit");
	t.vaulthunter_dot_exe("Rakk");
	t.vaulthunter_dot_exe("Gatling Turret");
	t.vaulthunter_dot_exe("Drifter");
	t.vaulthunter_dot_exe("Tankenstein"); // must fail

	beginTest("SuperTrap: destructors");
}

int main()
{
	std::srand(std::time(NULL));
	testClapTrap();
	testFragTrap();
	testNinjaTrap();
	testScavTrap();
	testSuperTrap();
	return (0);
}
