/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:56:07 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/12 18:35:30 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;

	MutantStack()
	{}

	MutantStack(const MutantStack &other) : std::stack<T>(other)
	{}

	virtual ~MutantStack()
	{}

	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}

	MutantStack	&operator=(const MutantStack &other)
	{
		std::stack<T>::operator=(other);
		return (*this);
	}
};
