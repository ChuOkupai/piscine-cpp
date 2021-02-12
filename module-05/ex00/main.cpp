/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:01:21 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 13:11:47 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testBureaucrat()
{
	beginTest("Bureaucrat: normal usage");
	{
		Bureaucrat b("Bernard", 69);

		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	}
	beginTest("Bureaucrat: GradeTooHighException (constructor)");
	{
		try
		{
			Bureaucrat b("Bernard", 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	beginTest("Bureaucrat: GradeTooLowException (constructor)");
	{
		try
		{
			Bureaucrat b("Bernard", 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	beginTest("Bureaucrat: GradeTooHighException (incrementGrade)");
	{
		Bureaucrat b("Bernard", 1);
		try
		{
			b.incrementGrade();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	beginTest("Bureaucrat: GradeTooLowException (decrementGrade)");
	{
		Bureaucrat b("Bernard", 150);
		try
		{
			b.decrementGrade();
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
	return (0);
}
