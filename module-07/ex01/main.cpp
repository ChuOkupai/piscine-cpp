/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 18:58:09 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
#include "iter.hpp"

static void ft_putchar(const char &c)
{
	std::cout << c;
}

static void ft_putnbr(const int &i)
{
	std::cout << i << ' ';
}

static void ft_putstring(const std::string &s)
{
	std::cout << s << std::endl;
}

static void ft_abs(int &i)
{
	if (i < 0)
		i = -i;
}

static void ft_magic(std::string &s)
{
	for (size_t i = 0; i < s.length(); ++i)
		s[i] = (std::isalpha(s[i]) ? s[i] % 10 : 9 - (s[i] % 10)) + '0';
}

int main()
{
	{
		char t[] = "Hello, World!\n";

		iter(t, std::strlen(t), &ft_putchar);
	}
	{
		int t[] = { -253, -6, 0, 34, 8 };

		iter(t, sizeof(t) / sizeof(*t), &ft_putnbr);
		std::cout << std::endl;
		iter(t, sizeof(t) / sizeof(*t), &ft_abs);
		iter(t, sizeof(t) / sizeof(*t), &ft_putnbr);
		std::cout << std::endl;
	}
	{
		std::string t[] = { "test", "code: 0235", "Secret message" };

		iter(t, sizeof(t) / sizeof(*t), &ft_putstring);
		iter(t, sizeof(t) / sizeof(*t), &ft_magic);
		iter(t, sizeof(t) / sizeof(*t), &ft_putstring);
	}
	return (0);
}
