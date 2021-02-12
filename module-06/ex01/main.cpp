/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:30:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 14:12:52 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Data.hpp"

static void testData()
{
	void	*raw = serialize();
	Data	*d = deserialize(raw);

	std::cout << "Data: " << d->s1 << '|' << d->n << '|' << d->s2 << std::endl;

	delete[] (reinterpret_cast<char*>(raw));
	delete (d);
}

int main()
{
	std::srand(std::time(NULL));
	testData();
	testData();
	testData();
	return (0);
}
