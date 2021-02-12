/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:11:50 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	static const size_t	_capacity = 8;
	static const size_t	_max_column = 4;
	static const size_t	_column_width = 10;
	Contact				_book[_capacity];
	size_t				_size;

	void	printColumn(std::string value);
	void	printSeparator() const;
	void	print();

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();
};

#pragma once
