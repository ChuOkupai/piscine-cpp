/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:58:50 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/09 13:02:54 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Data.hpp"

#define DATA_S_SIZE	(8 * sizeof(char))
#define DATA_N_SIZE	(sizeof(int))
#define DATA_SIZE	(2 * DATA_S_SIZE + DATA_N_SIZE)
#define DATA_N_LOC	(DATA_S_SIZE)
#define DATA_S2_LOC	(DATA_N_LOC + DATA_N_SIZE)

static void initArray(char *raw)
{
	static const char t[] = "0123456789" \
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
	"abcdefghijklmnopqrstuvwxyz";

	for (size_t i = 0; i < DATA_S_SIZE; ++i)
		raw[i] = t[std::rand() % sizeof(t) / sizeof(*t)];
}

void *serialize()
{
	char *r = new char[DATA_SIZE];

	initArray(r);
	*reinterpret_cast<int*>(r + DATA_N_LOC) = std::rand();
	initArray(r + DATA_S2_LOC);
	return (r);
}

Data *deserialize(void *raw)
{
	char	*r = reinterpret_cast<char*>(raw);
	Data	*d = new Data();

	d->s1 = std::string(r, DATA_S_SIZE);
	d->n = *reinterpret_cast<int*>(r + DATA_N_LOC);
	d->s2 = std::string(r + DATA_S2_LOC, DATA_S_SIZE);
	return (d);
}
