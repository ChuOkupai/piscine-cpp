/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:42 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 19:12:16 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

template <class T>
std::ostream &operator<<(std::ostream &stream, const Array<T> &t)
{
	stream << '[';
	if (t.size())
	{
		stream << t[0];
		for (size_t i = 1; i < t.size(); ++i)
			stream << ", " << t[i];
	}
	return (stream << ']' << std::endl);
}

int main()
{
	{
		Array<int> t(8);

		for (size_t i = 0; i < t.size(); ++i)
			t[i] = 1 << i;
		std::cout << t;
		try
		{
			t[8] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << "error: " << e.what() << std::endl;
		}
		
	}
	{
		Array<std::string> t(3);

		t[0] = "foo";
		t[1] = "bar";
		t[2] = "baz";
		std::cout << t;
		try
		{
			t[3] = "oops";
		}
		catch(const std::exception &e)
		{
			std::cerr << "error: " << e.what() << std::endl;
		}
	}
	return (0);
}
