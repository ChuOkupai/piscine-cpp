/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:49 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 16:37:45 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "identify.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testIdentify()
{
	Base	*t[4];
	size_t	i;

	for (i = 0; i < 3; ++i)
		t[i] = generate();
	t[i] = new Base; // 5Head

	beginTest("identify_from_pointer");
	for (i = 0; i < 4; ++i)
		identify_from_pointer(t[i]);
	
	beginTest("identify_from_reference");
	for (i = 0; i < 4; ++i)
		identify_from_reference(*t[i]);

	for (i = 0; i < 4; ++i)
		delete (t[i]);
}

int main()
{
	std::srand(std::time(NULL));
	testIdentify();
	return (0);
}
