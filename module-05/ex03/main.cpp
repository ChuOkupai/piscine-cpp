/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:42:53 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Intern.hpp"

static void beginTestForm(const std::string &type)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - Intern: makeForm (" << type << ')' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testIntern()
{
	const Intern		intern;
	const std::string	t[] = {
		"presidentialpardonform",
		"robotomyrequestform",
		"shrubberycreationform",
		"mycustomform"
	};

	for (size_t i = 0; i < sizeof(t) / sizeof(*t); ++i)
	{
		beginTestForm(t[i]);
		try
		{
			Form *f = intern.makeForm(t[i], t[i] + "_target");

			std::cout << *f;
			delete (f);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
}

int main()
{
	std::srand(std::time(NULL));
	testIntern();
	return (0);
}
