/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:40:02 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 13:53:29 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete (panther);
}

int main()
{
	memoryLeak();
	return (0);
}
