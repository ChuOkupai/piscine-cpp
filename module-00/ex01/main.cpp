/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:30 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/20 16:47:02 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

static void print_usage()
{
	std::cout <<
	"The most powerful phonebook of year 1982!\n\n"
	"Available commands:\n"
	"  ADD     Add a new contact\n"
	"  SEARCH  Search for an existing contact\n"
	"  EXIT    Quit the program\n"
	<< std::endl;
}

static bool command_read(std::string &s)
{
	std::cout << "> ";
	if (!std::getline(std::cin, s))
		std::cout << "EXIT" << std::endl;
	else if (s.compare("EXIT"))
		return (true);
	return (false);
}

int main()
{
	PhoneBook	book;
	std::string	cmd;

	print_usage();
	while (command_read(cmd))
		if (!cmd.compare("ADD"))
			book.addContact();
		else if (!cmd.compare("SEARCH"))
			book.searchContact();
		else if (cmd.size())
			std::cerr << "error: unknown command" << std::endl;
	return (0);
}
