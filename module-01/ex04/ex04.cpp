/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 03:35:19 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/21 17:50:17 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string s("HI THIS IS BRAIN");
	std::string *ptr = &s;
	std::string &ref(s);

	std::cout << *ptr << std::endl << ref << std::endl;
	return (0);
}
