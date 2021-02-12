/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:54:24 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:19:00 by asoursou         ###   ########.fr       */
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

	virtual void	action() const = 0;

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
	virtual ~Form();

	const std::string	&name() const;
	bool				isSigned() const;
	int					gradeRequiredToSign() const;
	int					gradeRequiredToExecute() const;

	void	beSigned(const Bureaucrat &executor);
	void	execute(const Bureaucrat &executor) const;

	Form	&operator=(const Form &other);
};

std::ostream	&operator<<(std::ostream &stream, const Form &form);
