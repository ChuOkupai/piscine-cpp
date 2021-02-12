/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:54:05 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:41:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Pair::Pair()
{}

Intern::Pair::Pair(const std::string &key, t_generateForm func) :
_key(key), _func(func)
{}

Intern::Pair::Pair(const Pair &other)
{
	*this = other;
}

Intern::Pair::~Pair()
{}

const std::string &Intern::Pair::key() const
{
	return (_key);
}

Intern::Pair::t_generateForm Intern::Pair::func() const
{
	return (_func);
}

Intern::Pair &Intern::Pair::operator=(const Pair &other)
{
	_key = other._key;
	_func = other._func;
	return (*this);
}

Form *Intern::generatePresidentialPardonForm(const std::string &target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

Form *Intern::generateRobotomyRequestForm(const std::string &target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

Form *Intern::generateShrubberyCreationForm(const std::string &target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

const char *Intern::UnknownForm::what() const throw()
{
	return ("Unkwnown form name");
}

Intern::Intern()
{
	_forms[0] = Intern::Pair("presidentialpardonform",
	Intern::generatePresidentialPardonForm);
	_forms[1] = Intern::Pair("robotomyrequestform",
	Intern::generateRobotomyRequestForm);
	_forms[2] = Intern::Pair("shrubberycreationform",
	Intern::generateShrubberyCreationForm);
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern()
{}

Form *Intern::makeForm(const std::string &type, const std::string &target) const
{
	for (size_t i = 0; i < _maxForms; ++i)
		if (type == _forms[i].key())
			return (_forms[i].func()(target));
	std::cerr << "Intern couldn't create form " << type << std::endl;
	throw (UnknownForm());
}

Intern &Intern::operator=(const Intern &other)
{
	for (size_t i = 0; i < _maxForms; ++i)
		_forms[i] = other._forms[i];
	return (*this);
}
