/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:56:35 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/11 11:56:39 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

class ItemNotFound: public std::exception
{
public:
	virtual const char	*what() const throw()
	{
		return ("Item not found");
	}
};

template <typename T>
int easyfind(T &container, int value)
{
	typename T::iterator i = find(container.begin(), container.end(), value);
	if (i == container.end())
		throw (ItemNotFound());
	return (*i);
}

