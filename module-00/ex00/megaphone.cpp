/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:34 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/20 16:19:07 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void print_uppercase(const char *s)
{
	while (*s)
		std::cout << static_cast<char>(std::toupper(*s++));
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; ++i)
			print_uppercase(av[i]);
	std::cout << std::endl;
	return (0);
}
