/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:35:11 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 18:56:00 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

template <typename T>
void iter(const T *array, size_t n, void (*func)(const T &))
{
	for (size_t i = 0; i < n; ++i)
		func(array[i]);
}

template <typename T>
void iter(T *array, size_t n, void (*func)(T &))
{
	for (size_t i = 0; i < n; ++i)
		func(array[i]);
}
