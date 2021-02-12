/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:44:37 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:13:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
private:
	const std::string	_name;
	const std::string	_type;

	const std::string	generateRandomName();
	const std::string	generateRandomType();

public:
	Zombie();
	~Zombie();

	void	announce() const;
};
