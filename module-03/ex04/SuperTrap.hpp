/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:40:38 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/31 13:14:18 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	void init();

public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &other);
	~SuperTrap();

	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);

	SuperTrap	&operator=(const SuperTrap &other);
};
