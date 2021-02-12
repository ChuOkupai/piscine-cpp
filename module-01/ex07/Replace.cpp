/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:04:29 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 18:44:13 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <cstring>
#include <iostream>
#include "Replace.hpp"

void Replace::sed()
{
	while (size >= _s1.size())
		if (std::memcmp(_s1.c_str(), buf, size))
		{
			out << *buf;
			std::memmove(buf, buf + 1, --size);
			in.get(buf[size]);
			size += in.gcount();
		}
		else
		{
			out << _s2;
			in.read(buf, _s1.size());
			size = in.gcount();
		}
	if (size)
		out.write(buf, size);
}

Replace::Replace(const std::string &path, const std::string &s1,
const std::string &s2) :
_s1(s1), _s2(s2), buf(new char[s1.size()])
{
	const std::string path_out(path + ".replace");

	if (!s1.length() || !s2.length())
		throw (std::string(std::strerror(EINVAL)));
	in.open(path.c_str());
	if (!in.is_open())
		throw (path + ": " + std::strerror(errno));
	out.open(path_out.c_str());
	if (!out.is_open())
		throw (path_out + ": " + std::strerror(errno));
	std::memset(buf, 0, s1.size());
	in.read(buf, _s1.size());
	size = in.gcount();
	sed();
	if (in.bad())
		throw (path + ": " + std::strerror(errno));
	if (out.bad())
		throw (path_out + ": " + std::strerror(errno));
}

Replace::~Replace()
{
	delete[] (buf);
}
