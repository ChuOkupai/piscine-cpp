/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:04:30 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/12 18:27:37 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testSpan()
{
	beginTest("Span");
	int		t[] = { 5, 3, 17, 9, 11 };
	Span	s = Span(5);

	s.addNumbers(t, t + sizeof(t) / sizeof(*t));
	
	std::cout << "shortestSpan: " << s.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << s.longestSpan() << std::endl;
}

static void testSpanBig()
{
	beginTest("Span (big array)");
	Span	s = Span(20001);

	for (int i = -10000; i <= 10000; ++i)
		s.addNumber(i);
	
	std::cout << "shortestSpan: " << s.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << s.longestSpan() << std::endl;
}

static void testSpanExceptions()
{
	beginTest("Span (exceptions)");
	Span	s = Span(1);

	try
	{
		std::cout << "shortestSpan without items: " << std::endl;
		s.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "longestSpan without items: " << std::endl;
		s.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	s.addNumber(1);
	try
	{
		std::cout << "shortestSpan with signle item: " << std::endl;
		s.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "longestSpan with signle item: " << std::endl;
		s.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "addNumber (capacity reached): " << std::endl;
		s.addNumber(2);
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
}

int main()
{
	testSpan();
	testSpanBig();
	testSpanExceptions();
	return (0);
}
