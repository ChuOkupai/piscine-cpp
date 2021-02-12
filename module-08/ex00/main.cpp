/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:56:58 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/12 18:10:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testList()
{
	beginTest("easyfind: List");
	std::list<int> l;
	l.push_back(0);
	l.push_back(42);
	l.push_back(-5);
	l.push_back(8);
	try
	{
		std::cout << easyfind(l, 42) << " found!" << std::endl;
		easyfind(l, 88); // fail
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;;
	}
}

static void testVector()
{
	beginTest("easyfind: Vector");
	std::vector<int> v(4);
	v.push_back(0);
	v.push_back(42);
	v.push_back(-5);
	v.push_back(8);
	try
	{
		std::cout << easyfind(v, 42) << " found!" << std::endl;
		easyfind(v, 88); // fail
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;;
	}
}

int main()
{
	testList();
	testVector();
	return (0);
}
