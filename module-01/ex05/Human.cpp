/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 01:29:18 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:05:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

const std::string Human::identify() const
{
	return (_brain.identify());
}

const Brain &Human::getBrain() const
{
	return (_brain);
}
