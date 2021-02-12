/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:15 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/20 16:28:28 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

const std::string Contact::_name[_capacity] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Contact::Contact()
{}

Contact::~Contact()
{}

const std::string Contact::name(const size_t index)
{
	return (index < _capacity ? _name[index] : "");
}

std::string Contact::content(const size_t index) const
{
	return (index < _capacity ? _content[index] : "");
}

void Contact::init()
{
	for (size_t i = 0; i < _capacity; ++i)
	{
		std::cout << _name[i] << ": ";
		if (!std::getline(std::cin, _content[i]))
			std::cout << std::endl;
	}
}

void Contact::print() const
{
	for (size_t i = 0; i < _capacity; ++i)
		std::cout << _name[i] << ": " << _content[i] << std::endl;
}
