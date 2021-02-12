/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 22:51:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 13:17:04 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ostream>

class Fixed
{
private:
	static const int	frac = 8;

	int	value;

public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &other);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;
	Fixed	&operator=(const Fixed &other);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &object);
