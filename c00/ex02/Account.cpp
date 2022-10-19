/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:20 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:57:21 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0, Account::_totalAmount = 0,
    Account::_totalNbDeposits = 0, Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_accountIndex = Account::_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits    = 0;
    this->_nbWithdrawals = 0;
}

Account::~Account()
{
    Account::_displayTimestamp();

    this->_nbAccounts--;

    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "closed" << std::endl;
}

int Account::getNbAccounts( void ) { return Account::_nbAccounts; }

int Account::getTotalAmount( void ) { return Account::_totalAmount; }

int Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }

int Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

int Account::checkAmount( void ) const { return this->_amount > 0; }

void Account::_displayTimestamp( void )
{
    time_t now        = std::time( NULL );
    tm    *formatTime = std::localtime( &now );

    std::cout << "[" << 1900 + formatTime->tm_year << 1 + formatTime->tm_mon
              << formatTime->tm_mday << "_" << formatTime->tm_hour
              << formatTime->tm_min << formatTime->tm_sec << "]";
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();

    std::cout << "accounts:" << Account::_nbAccounts << ";"
              << "total:" << Account::_totalAmount << ";"
              << "deposits:" << Account::_totalNbDeposits << ";"
              << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "deposit:" << deposit << ";";

    this->_amount += deposit;
    Account::_totalAmount += deposit;

    std::cout << "amount:" << this->_amount << ";";

    this->_nbDeposits++;
    Account::_totalNbDeposits++;

    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";

    if ( this->_amount < withdrawal ) {
        std::cout << "withdrawal:refused" << std::endl;
        return ( false );
    }

    std::cout << "withdrawal:" << withdrawal << ";";

    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;

    std::cout << "amount:" << this->_amount << ";";

    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;

    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

    return ( true );
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
