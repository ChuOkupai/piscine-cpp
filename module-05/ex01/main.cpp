/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 13:40:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testBureaucrat()
{
	beginTest("Bureaucrat: signForm");
	{
		Bureaucrat	b("Karen", 42);
		Form		f("ISF declaraction of Patrick Balkany", 45, 50);

		std::cout << b << f;
		b.signForm(f);
		std::cout << f;
	}
	beginTest("Bureaucrat: GradeTooLowException (signForm)");
	{
		Bureaucrat	b("Vanessa", 70);
		Form		f("DGSE classified mission: \"Piou-Piou\"", 1, 1);

		std::cout << b << f;
		b.signForm(f);
		std::cout << f;
	}
}

static void testForm()
{
	beginTest("Form: GradeTooHighException (constructor)");
	{
		try
		{
			Form b("random piece of paper", 0, 42);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			Form b("random piece of paper", 42, 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	beginTest("Form: GradeTooLowException (constructor)");
	{
		try
		{
			Form b("random piece of paper", 151, 42);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			Form b("random piece of paper", 42, 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
}

int main()
{
	testBureaucrat();
	testForm();
	return (0);
}
