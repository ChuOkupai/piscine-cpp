/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:48:59 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/12 18:43:04 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

static void beginTest(const std::string &label)
{
	std::cout << "+--------" << std::endl;
	std::cout << "| TEST - " << label << ':' << std::endl;
	std::cout << "+----" << std::endl;
}

static void testMutantStack()
{
	beginTest("MutantStack");
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// [...]
	mstack.push(0);

	MutantStack<int>			m2 = mstack;
	MutantStack<int>::iterator	i;

	mstack.push(-999);

	std::cout << "stack:" << std::endl;
	for (i = mstack.begin() + 1; i != mstack.end(); ++i)
		std::cout << *i << std::endl;

	std::cout << "copy before push(-999):" << std::endl;
	for (i = m2.begin() + 1; i != m2.end(); ++i)
		std::cout << *i << std::endl;
}

int main()
{
	testMutantStack();
	return (0);
}
