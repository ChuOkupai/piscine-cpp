/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:39:53 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 14:15:25 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(const std::string name) : _name(name)
{}

Pony::~Pony()
{}

void Pony::gallop() const
{
	std::cout << _name << " is galloping..." << std::endl;
}
