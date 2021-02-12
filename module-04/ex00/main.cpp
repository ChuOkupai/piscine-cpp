/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:49 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:05:08 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

int main()
{
	beginTest("constructors");
	Sorcerer	bellatrix("Bellatrix Lestrange", "Death Eater");
	Victim		jimmy("Jimmy");
	Peon		joe("Joe");
	Peasant		john("John");

	beginTest("output stream overload");
	std::cout << bellatrix << jimmy << joe << john;

	beginTest("polymorph");
	bellatrix.polymorph(jimmy);
	bellatrix.polymorph(joe);
	bellatrix.polymorph(john);

	beginTest("destructors");
	return (0);
}
