/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:39:57 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 13:51:12 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap()
{
	Pony *p = new Pony("Jean-Michel-on-the-heap");

	p->gallop();
	delete (p);
}

static void ponyOnTheStack()
{
	Pony p("Jean-Patrick-on-the-stack");

	p.gallop();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
