/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 22:51:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 12:59:24 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
private:
	static const int	frac = 8;

	int	value;

public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(const int raw);
	Fixed	&operator=(const Fixed &other);
};
