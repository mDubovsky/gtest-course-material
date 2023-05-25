#include "intermediate4-source.hpp"

namespace Intermediate4Code
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