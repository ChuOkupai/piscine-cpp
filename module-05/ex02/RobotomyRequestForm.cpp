/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:51:43 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:19:11 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

const char *RobotomyRequestForm::RobotomizationFailure::what() const throw()
{
	return ("Robotomization failed");
}

void RobotomyRequestForm::action() const
{
	std::cout << "Rizzz..." << std::endl;
	if (std::rand() % 2)
		std::cout << name()<< " has been robotomized successfully!"
		<< std::endl;
	else
		throw (RobotomizationFailure());
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form(target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o) :
Form(o)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(
const RobotomyRequestForm &other)
{
	Form::operator=(other);
	return (*this);
}
