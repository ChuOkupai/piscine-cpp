/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 02:40:56 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 18:40:01 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

static int print_usage(const char *bin)
{
	std::cout << "usage: " << bin << " [FILE] [S1] [S2]\n"
	<< "Writes a copy of [FILE] to [FILE].replace, after replacing every"
	"occurence of the string [S1] with the string [S2].\n"
	<< "[S1] and [S2] must be non empty." << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (print_usage(*av));
	try
	{
		Replace(av[1], av[2], av[3]);
	}
	catch (const std::string message)
	{
		std::cout << "error: " << message << std::endl;
		return (2);
	}
	return (0);
}
