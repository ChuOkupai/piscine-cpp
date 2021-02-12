/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 14:46:42 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void init();

public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	~FragTrap();

	void	vaulthunter_dot_exe(const std::string &target);

	FragTrap	&operator=(const FragTrap &other);
};
