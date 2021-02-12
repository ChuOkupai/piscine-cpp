/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:02:05 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:19:07 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::action() const
{
	std::cout << name() << " has been pardoned by Zafod Beeblebrox"
	<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form(target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(
const PresidentialPardonForm &o) : Form(o)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
const PresidentialPardonForm &other)
{
	Form::operator=(other);
	return (*this);
}
