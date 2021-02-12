/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:17:19 by asoursou          #+#    #+#             */
/*   Updated: 2021/02/07 14:19:16 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <cstring>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

const char *ShrubberyCreationForm::IOException::what() const throw()
{
	return (std::strerror(errno));
}

void ShrubberyCreationForm::action() const
{
	std::ofstream f;

	f.open((name() + "_shrubbery").c_str(), std::ofstream::out);
	if (!f.is_open())
		throw (IOException());
	f << "               ,@@@@@@@," << std::endl
	<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
	<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
	<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
	<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
	<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
	<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
	<< "       |o|        | |         | |" << std::endl
	<< "       |.|        | |         | |" << std::endl
	<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//" << std::endl;
	f.close();
	if (f.bad())
		throw (IOException());
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form(target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o) :
Form(o)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	return (*this);
}
