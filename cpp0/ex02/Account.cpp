/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:42:09 by hchadili          #+#    #+#             */
/*   Updated: 2025/01/10 13:16:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    std::cout << " index:"<< _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount+=initial_deposit;
    _amount = initial_deposit;
}
Account::~Account( void )
{
    _displayTimestamp();
    std:: cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int Account::getNbDeposits()
{
    return _totalNbDeposits;
}
int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}
int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:"<< _totalAmount <<";deposits:"<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
     std::cout << " index:"<< _accountIndex << ";p_amount:" << _amount ;
    _amount+=deposit;
    _totalAmount += deposit;
    _nbDeposits++; 
    _totalNbDeposits++;
    std::cout << ";deposit:" << deposit << "amount:"<<_amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:"<< _accountIndex << ";p_amount:" << _amount;
    if(withdrawal > _amount)
    {
        std::cout << ";refused" << std::endl;
        return false;
    }
    else
    {
        _amount-= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << ";withdrawal:"  << withdrawal << ";amount:"<<_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return true;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(0);
    char buff[80];
    std::strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S]", std::localtime(&now));
    std::cout << buff;
}