/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:00:32 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 13:14:24 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
_name(name), _grade(grade)
{
	if (grade < _maxGrade)
		throw (GradeTooHighException());
	else if (grade > _minGrade)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &o) :
_name(o._name), _grade(o._grade)
{}

Bureaucrat::~Bureaucrat()
{}

const std::string &Bureaucrat::name() const
{
	return (_name);
}

int Bureaucrat::grade() const
{
	return (_grade);
}

void Bureaucrat::decrementGrade()
{
	if (++_grade > _minGrade)
		throw (GradeTooLowException());
}

void Bureaucrat::incrementGrade()
{
	if (--_grade < _maxGrade)
		throw (GradeTooHighException());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	_grade = other._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &b)
{
	stream << b.name() << ", bureaucrat grade " << b.grade();
	return (stream << std::endl);
}
