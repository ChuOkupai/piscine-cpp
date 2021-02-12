/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:47:52 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/26 18:01:12 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	void init();

public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &other);
	~NinjaTrap();

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(NinjaTrap &target);
	void	ninjaShoebox(ScavTrap &target);

	NinjaTrap	&operator=(const NinjaTrap &other);
};
