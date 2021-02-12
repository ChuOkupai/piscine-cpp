/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 10:43:48 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 13:23:02 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <sstream>
#include "Scalar.hpp"
#include "utility.hpp"

static int convert(const char *str)
{
	try
	{
		Scalar				s(str);
		std::ostringstream	buf;

		try
		{
			std::cout << "char: ";
			char c = static_cast<char>(s);
			std::cout << '\'';
			if (c == '\'')
				std::cout << '\\';
			std::cout << c << '\'' << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			std::cout << "int: ";
			std::cout << static_cast<int>(s) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			std::cout << "float: ";
			buf << static_cast<float>(s);
			if (!isCompleteFloatingPoint(buf.str()))
				buf << ".0";
			std::cout << buf.str() << 'f' << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << "double: ";
		buf.str("");
		buf << static_cast<double>(s);
		if (!isCompleteFloatingPoint(buf.str()))
			buf << ".0";
		std::cout << buf.str() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "error: " << e.what() << std::endl;
		return (2);
	}
	return (0);
}

static int print_usage(const char *bin)
{
	if (bin)
		std::cout << "usage: " << bin << " [LITTERAL VALUE]" << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	return (ac == 2 ? convert(av[1]) : print_usage(*av));
}
