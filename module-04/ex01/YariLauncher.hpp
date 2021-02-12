/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YariLauncher.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:34:40 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/02 13:31:13 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class YariLauncher : public AWeapon
{
public:
	YariLauncher();
	YariLauncher(const YariLauncher &other);
	virtual ~YariLauncher();

	void	attack() const;

	YariLauncher	&operator=(const YariLauncher &other);
};

