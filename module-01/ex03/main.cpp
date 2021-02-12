/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:55:12 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 17:47:24 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "ZombieHorde.hpp"

static void test(size_t n)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - ZombieHorde of size " << n << ':' << std::endl;
	std::cout << "+----" << std::endl;

	ZombieHorde(n).announce();
}

int main()
{
	std::srand(std::time(NULL));
	test(0);
	test(1);
	test(2);
	test(4);
	return (0);
}
