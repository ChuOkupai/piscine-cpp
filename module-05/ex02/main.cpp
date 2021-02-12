/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:10:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testPresidentialPardonForm()
{
	beginTest("PresidentialPardonForm");
	{
		Bureaucrat b("Philippe de la compta", 3);
		PresidentialPardonForm f("CD PROJEKT RED");

		std::cout << b << f;
		b.executeForm(f);
	}
	{
		Bureaucrat b("An anonymous bureaucrat", 8);
		PresidentialPardonForm f("Ubisoft downgrades");

		std::cout << b << f;
		try
		{
			b.executeForm(f);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
}

static void testRobotomyRequestForm()
{
	beginTest("RobotomyRequestForm");
	{
		Bureaucrat b("Discord bot", 45);
		RobotomyRequestForm f(
		"Another random teacher using Zoom instead of Discord");

		std::cout << b << f;
		for (int i = 0; i < 4; ++i)
			b.executeForm(f);
	}
	{
		Bureaucrat b("Google bot", 60);
		RobotomyRequestForm f(
		"Another random teacher using Google Meet instead of Discord");

		std::cout << b << f;
		try
		{
			b.executeForm(f);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
}

static void testShrubberyCreationForm()
{
	beginTest("ShrubberyCreationForm");
	{
		Bureaucrat b("Laurence", 80);
		ShrubberyCreationForm f("trees");

		std::cout << b << f;
		b.executeForm(f);
	}
	{
		Bureaucrat b("Monsanto", 138);
		ShrubberyCreationForm f("X-mas");

		std::cout << b << f;
		try
		{
			b.executeForm(f);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
}

int main()
{
	std::srand(std::time(NULL));
	testPresidentialPardonForm();
	testRobotomyRequestForm();
	testShrubberyCreationForm();
	return (0);
}
