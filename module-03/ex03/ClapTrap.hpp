/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:19:00 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/25 22:53:29 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
private:
	void init();

protected:
	std::string	name;
	std::string	type;
	unsigned	level;
	unsigned	hit;
	unsigned	maxHit;
	unsigned	energy;
	unsigned	maxEnergy;
	unsigned	melee;
	unsigned	ranged;
	unsigned	armor;

	std::ostream	&log();
	void			quote(const std::string &content);

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();

	void	rangedAttack(const std::string &target);
	void	meleeAttack(const std::string &target);
	void	takeDamage(unsigned amount);
	void	beRepaired(unsigned amount);

	ClapTrap	&operator=(const ClapTrap &other);
};
