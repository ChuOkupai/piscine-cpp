/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:40:09 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 17:30:28 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testAssign()
{
	beginTest("Fixed: assignations");

	Fixed	a;
	Fixed	b(5.05f);

	std::cout << "a is " << a << ", b is " << b << std::endl;
	a = b;
	std::cout << "a = b is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "--b is " << --b << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "b-- is " << b++ << std::endl;
	std::cout << "b is " << b << std::endl;
}

static void testArithmetic()
{
	beginTest("Fixed: arithmetic operators");

	const Fixed	a(34.89f);
	const Fixed	b(1.46f);

	std::cout << "a is " << a << ", b is " << b << std::endl;
	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "a / b is " << a / b << std::endl;
	std::cout << "a * b is " << a * b << std::endl;

	
}

static void testComparisonInternal(const Fixed &a, const Fixed &b)
{
	std::cout << "a is " << a << ", b is " << b << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a <= b is " << (a <= b) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl;
	std::cout << "min is " << min(a, b) << std::endl;
	std::cout << "max is " << max(a, b) << std::endl;
}

static void testComparison()
{
	beginTest("Fixed: comparison operators");

	const Fixed	a(42.42f);
	Fixed		b(a);

	testComparisonInternal(a, b);
	testComparisonInternal(a, ++b);
}

int main()
{
	testAssign();
	testArithmetic();
	testComparison();
	return (0);
}
