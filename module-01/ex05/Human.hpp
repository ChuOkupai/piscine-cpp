/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 01:29:35 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/22 16:13:35 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"

class Human
{
private:
	const Brain _brain;

public:
	Human();
	~Human();

	const std::string	identify() const;
	const Brain			&getBrain() const;
};
