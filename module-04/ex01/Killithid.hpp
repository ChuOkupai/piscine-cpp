/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Killithid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:53:30 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/30 13:53:38 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

class Killithid : public Enemy
{
public:
	Killithid();
	Killithid(const Killithid &other);
	virtual ~Killithid();

	Killithid	&operator=(const Killithid &other);
};

