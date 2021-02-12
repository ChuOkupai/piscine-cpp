/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:27 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/20 16:38:46 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::printColumn(std::string value)
{
	std::cout << '|';
	if (value.size() > _column_width)
	{
		value = value.substr(0, _column_width);
		value[_column_width - 1] = '.';
	}
	else
		std::cout << std::setw(_column_width);
	std::cout << value;
}

void PhoneBook::printSeparator() const
{
	std::string	s(_column_width, '-');

	for (size_t i = 0; i < _max_column; ++i)
		std::cout << '+' << s;
	std::cout << '+' << std::endl;
}

void PhoneBook::print()
{
	std::cout << std::setfill(' ');
	printSeparator();
	printColumn("index");
	for (size_t i = 1; i < _max_column; ++i)
		printColumn(_book[i].name(i - 1));
	std::cout << '|' << std::endl;
	printSeparator();
	for (size_t i = 0; i < _size; ++i)
	{
		std::cout << '|' << std::setw(_column_width) << i;
		for (size_t j = 1; j < _max_column; ++j)
			printColumn(_book[i].content(j - 1));
		std::cout << '|' << std::endl;
	}
	printSeparator();
}

void PhoneBook::addContact()
{
	if (_size == _capacity)
		std::cerr << "error: the phonebook is full!" << std::endl;
	else
		_book[_size++].init();
}

void PhoneBook::searchContact()
{
	if (!_size)
	{
		std::cout << "the phonebook is empty" << std::endl;
		return ;
	}
	print();
	std::cout << std::endl << "selected index: " << std::flush;
	size_t i = _size;
	std::cin >> i;
	std::cin.ignore();
	if (i >= _size)
		std::cerr << "error: invalid index" << std::endl;
	else
		_book[i].print();
}
