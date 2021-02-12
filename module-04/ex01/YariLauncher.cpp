/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YariLauncher.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:34:49 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:12:22 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "YariLauncher.hpp"

YariLauncher::YariLauncher() : AWeapon("Yari Launcher", 20, 221)
{}

YariLauncher::YariLauncher(const YariLauncher &other) : AWeapon(other)
{}

YariLauncher::~YariLauncher()
{}

void YariLauncher::attack() const
{
	std::cout << "* SHSHSHSH... BOOM *" << std::endl;
}

YariLauncher &YariLauncher::operator=(const YariLauncher &other)
{
	AWeapon::operator=(other);
	return (*this);
}
