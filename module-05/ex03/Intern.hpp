/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:54:14 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:33:27 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	class Pair
	{
	public:
		typedef Form	*(*t_generateForm)(const std::string &);

		Pair();
		Pair(const std::string &key, t_generateForm func);
		Pair(const Pair &other);
		~Pair();

		const std::string	&key() const;
		t_generateForm		func() const;

		Pair	&operator=(const Pair &other);

	private:
		std::string		_key;
		t_generateForm	_func;
	};

	static const size_t	_maxForms = 3;

	Pair	_forms[_maxForms];

	static Form	*generatePresidentialPardonForm(const std::string &target);
	static Form	*generateRobotomyRequestForm(const std::string &target);
	static Form	*generateShrubberyCreationForm(const std::string &target);

public:
	class UnknownForm: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	Intern();
	Intern(const Intern &other);
	~Intern();

	Form	*makeForm(const std::string &type, const std::string &target) const;

	Intern	&operator=(const Intern &other);
};
