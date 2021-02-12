/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 01:28:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:05:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain()
{}

Brain::~Brain()
{}

const std::string Brain::identify() const
{
	std::stringstream s;

	s << "0x" << std::hex << this;
	return (s.str());
}
