/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:34:44 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:14:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class FragTrap
{
private:
	std::string	name;
	unsigned	level;
	unsigned	hit;
	unsigned	maxHit;
	unsigned	energy;
	unsigned	maxEnergy;
	unsigned	melee;
	unsigned	ranged;
	unsigned	armor;

	void			init();
	std::ostream	&log();
	void			quote(const std::string &content);

public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	~FragTrap();

	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned amount);
	void	beRepaired(unsigned amount);
	void	vaulthunter_dot_exe(const std::string &target);

	FragTrap	&operator=(const FragTrap &other);
};
