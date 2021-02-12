/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 13:31:34 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
private:
	static const int _maxGrade = 1;
	static const int _minGrade = 150;

	const std::string	_name;
	const int			_gradeRequiredToSign;
	const int			_gradeRequiredToExecute;
	bool				_isSigned;

	Form();

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

	Form(const std::string &name, int gradeRequiredToSign,
	int gradeRequiredToExecute);
	Form(const Form &other);
	~Form();

	const std::string	&name() const;
	bool				isSigned() const;
	int					gradeRequiredToSign() const;
	int					gradeRequiredToExecute() const;

	void	beSigned(const Bureaucrat &executor);

	Form	&operator=(const Form &other);
};

std::ostream	&operator<<(std::ostream &stream, const Form &form);
