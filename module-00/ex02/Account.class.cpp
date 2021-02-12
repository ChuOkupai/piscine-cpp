/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <asoursou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:17:29 by asoursou          #+#    #+#             */
/*   Updated: 2021/01/15 13:34:58 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
	<< _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0),
_nbWithdrawals(0)
{
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account()
{
	--_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";deposit:" << deposit;
	_totalAmount += deposit;
	++_totalNbDeposits;
	_amount += deposit;
	++_nbDeposits;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
	<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	++_totalNbWithdrawals;
	_amount -= withdrawal;
	++_nbWithdrawals;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
	<< _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	static int calls = 0;
	++calls;
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:"
	<< _nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

Account::Account(void)
{}
