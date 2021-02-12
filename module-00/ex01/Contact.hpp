/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 03:07:21 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:09:04 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Contact
{
private:
	static const size_t			_capacity = 11;
	static const std::string	_name[_capacity];
	std::string					_content[_capacity];

public:
	Contact();
	~Contact();

	static const std::string	name(const size_t index);
	std::string					content(const size_t index) const;

	void	init();
	void	print() const;
};
