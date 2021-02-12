/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:23:26 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/06 15:50:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <exception>

template <class T>
class Array
{
private:
	T		*_t;
	size_t	_size;

public:
	class IndexOutOfBounds: public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("Index out of bounds");
		}
	};

	Array() : _t(NULL), _size(0)
	{}

	Array(size_t n) : _t(new T[n]), _size(n)
	{}

	Array(const Array &other) : _t(NULL), _size(0)
	{
		*this = other;
	}

	~Array()
	{
		if (_t)
			delete[] (_t);
	}

	size_t	size() const
	{
		return (_size);
	}

	const T	&operator[](size_t i) const
	{
		if (i < _size)
			return (_t[i]);
		throw (IndexOutOfBounds());
	}

	T		&operator[](size_t i)
	{
		if (i < _size)
			return (_t[i]);
		throw (IndexOutOfBounds());
	}

	Array	&operator=(const Array &o)
	{
		if (_t)
			delete[] (_t);
		_size = o._size;
		_t = _size ? new T[_size] : NULL;
		for (size_t i = 0; i < _size; ++i)
			_t[i] = o[i];
		return (*this);
	}
};
