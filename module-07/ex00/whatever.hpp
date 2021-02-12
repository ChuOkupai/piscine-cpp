/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:24:38 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/10 10:57:11 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
const T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
const T &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
	return (a > b ? a : b);
}
