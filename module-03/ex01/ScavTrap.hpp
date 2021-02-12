/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:22:17 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:18:27 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ScavTrap
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
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned amount);
	void	beRepaired(unsigned amount);
	void	challengeNewcomer();

	ScavTrap	&operator=(const ScavTrap &other);
};
