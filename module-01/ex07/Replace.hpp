/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:04:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:13:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include <string>

class Replace
{
private:
	std::ifstream		in;
	std::ofstream		out;
	const std::string	_s1;
	const std::string	_s2;
	char				*buf;
	size_t				size;

	void	sed();

public:
	Replace(const std::string &path, const std::string &s1,
	const std::string &s2);
	~Replace();
};
