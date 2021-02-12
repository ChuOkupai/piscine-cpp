/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:08:18 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 16:36:57 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	const int r = std::rand() % 3;

	if (!r)
		return (new A);
	if (r == 1)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *b)
{
	if (dynamic_cast<A*>(b) != NULL)
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(b) != NULL)
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(b) != NULL)
		std::cout << 'C' << std::endl;
	else
		std::cerr << "error: unknown type" << std::endl;
}

void identify_from_reference(Base &b)
{
	identify_from_pointer(&b);
}
