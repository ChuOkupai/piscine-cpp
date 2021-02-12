/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:44:28 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:05:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string name, const std::string type) :
_name(name), _type(type)
{}

Zombie::~Zombie()
{}

void Zombie::announce() const
{
	std::cout << '<' << _name << " (" << _type << ")> Braiiiiiiinnnssss..."
	<< std::endl;
}
