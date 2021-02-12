/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:03:56 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/11 13:09:58 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <vector>

class Span
{
private:
	size_t				_capacity;
	size_t				_size;
	bool				_sorted;
	std::vector<int>	_v;

public:
	class NoMoreSpaceLeft: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class NoSpanFound: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	Span(unsigned n = 0);

	Span(const Span &other);

	~Span();

	void	addNumber(int value);

	template<class InputIt>
	void	addNumbers(InputIt first, InputIt last)
	{
		for (InputIt i = first; i != last; ++i)
			addNumber(*i);
	}

	int		shortestSpan();
	int		longestSpan();

	Span	&operator=(const Span &other);
};
