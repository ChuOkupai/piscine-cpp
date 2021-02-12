/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:48:56 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:18:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

	void	action() const;

public:
	class RobotomizationFailure: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
};
