/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:56:11 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:20:26 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form::Form(const std::string &name, int gradeRequiredToSign,
int gradeRequiredToExecute) :
_name(name), _gradeRequiredToSign(gradeRequiredToSign),
_gradeRequiredToExecute(gradeRequiredToExecute), _isSigned(false)
{
	if (gradeRequiredToSign < _maxGrade)
		throw (GradeTooHighException());
	else if (gradeRequiredToSign > _minGrade)
		throw (GradeTooLowException());
	if (gradeRequiredToExecute < _maxGrade)
		throw (GradeTooHighException());
	else if (gradeRequiredToExecute > _minGrade)
		throw (GradeTooLowException());
}

Form::Form(const Form &o) :
_name(o._name), _gradeRequiredToSign(o._gradeRequiredToSign),
_gradeRequiredToExecute(o._gradeRequiredToExecute)
{
	*this = o;
}

Form::~Form()
{}

const std::string &Form::name() const
{
	return (_name);
}

bool Form::isSigned() const
{
	return (_isSigned);
}

int Form::gradeRequiredToSign() const
{
	return (_gradeRequiredToSign);
}

int Form::gradeRequiredToExecute() const
{
	return (_gradeRequiredToExecute);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.grade() > _gradeRequiredToSign)
		throw (GradeTooLowException());
	_isSigned = true;
}

Form &Form::operator=(const Form &o)
{
	_isSigned = o._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Form &f)
{
	stream << f.name() << ", Form (is signed: " << f.isSigned()
	<< ", required grade to sign: " << f.gradeRequiredToSign()
	<< ", required grade to execute: " << f.gradeRequiredToExecute();
	return (stream << ')' << std::endl);
}
