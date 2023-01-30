#include "beginner8-source.hpp"
#include <assert.h>

Wallet::Wallet()
{
	m_balance = 0;
}

Wallet::~Wallet()
{
	// burning money is illegal!
	assert(m_balance == 0);
}

void Wallet::addBalance(int sum)
{
	m_balance += sum;
}

int Wallet::getBalance()
{
	return m_balance;
}

void Wallet::setBalance(int balance)
{
	m_balance = balance;
}
