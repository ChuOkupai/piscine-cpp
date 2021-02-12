/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:57:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:03:24 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
	static const int _maxGrade = 1;
	static const int _minGrade = 150;

	const std::string	_name;
	int					_grade;

	Bureaucrat();

public:
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	const std::string	&name() const;
	int					grade() const;

	void	decrementGrade();
	void	incrementGrade();
	void	signForm(Form &form);

	Bureaucrat	&operator=(const Bureaucrat &other);
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &b);
