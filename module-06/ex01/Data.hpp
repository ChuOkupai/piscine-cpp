/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:28:47 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 12:49:42 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void			*serialize();

Data			*deserialize(void *raw);
