/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:56:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 17:46:58 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "ZombieEvent.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void test1()
{
	beginTest("newZombie with default type");

	ZombieEvent	event;
	Zombie		*z;

	z = event.newZombie("Hogwash");
	z->announce();
	delete (z);
}

static void test2()
{
	beginTest("newZombie with custom type");

	ZombieEvent	event;
	Zombie		*z;

	event.setZombieType("Brainlet");
	z = event.newZombie("Razmot");
	z->announce();
	delete (z);
}

static void test3()
{
	beginTest("randomChump with custom types");

	ZombieEvent event;

	event.setZombieType("Roamer");
	event.randomChump();
	event.randomChump();
	event.setZombieType("Walker");
	event.randomChump();
	event.randomChump();
}

int main()
{
	std::srand(std::time(NULL));
	test1();
	test2();
	test3();
	return (0);
}
