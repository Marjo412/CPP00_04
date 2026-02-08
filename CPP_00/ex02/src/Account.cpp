/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:50:30 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/28 13:47:50 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <iostream> //standard library
#include <string>
#include <cctype>
#include <ctime>

/*
    1. Create account
    2. Display accounts infos
    3. Display status
    4. Deposit
    5. Withdrawal
    6. Destructor
*/

// Define static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals =0;