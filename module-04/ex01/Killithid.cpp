/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Killithid.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:53:50 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 14:04:04 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Killithid.hpp"

#define BIRTH_MESSAGE	"* BAMF *"

Killithid::Killithid() : Enemy("Killithid", 80)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

Killithid::Killithid(const Killithid &other) : Enemy(other)
{
	std::cout << BIRTH_MESSAGE << std::endl;
}

Killithid::~Killithid()
{
	std::cout << "* WHOOSH *" << std::endl;
}

Killithid &Killithid::operator=(const Killithid &other)
{
	Enemy::operator=(other);
	return (*this);
}
