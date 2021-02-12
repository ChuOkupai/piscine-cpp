/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:15:51 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 13:17:55 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <string>

class Scalar
{
private:
	double _value;

	bool	inBounds(long min, long max) const;

public:
	class ImpossibleConversion: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class InvalidArgument: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class NotDisplayable: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	Scalar(const char *s);
	Scalar(const Scalar &other);
	~Scalar();

	operator char() const;
	operator double() const;
	operator float() const;
	operator int() const;

	Scalar	&operator=(const Scalar &other);
};
