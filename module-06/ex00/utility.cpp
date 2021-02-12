/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:17:06 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 13:43:42 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool isCompleteFloatingPoint(const std::string &s)
{
	const char m[] = "ne.";

	for (size_t i = 0; i < sizeof(m) / sizeof(*m); ++i)
		if (s.find(m[i]) != std::string::npos)
			return (true);
	return (false);
}
