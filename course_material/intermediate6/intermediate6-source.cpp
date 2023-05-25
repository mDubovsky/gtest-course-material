#include "intermediate6-source.hpp"

namespace Intermediate6Code
{
    Bank::Bank() :
        m_balance(0)
    {}

    void Bank::depositMoney(int amount)
    {
        m_balance += amount;
    }
    int Bank::getBalance() const
    {
        return m_balance;
    }
}