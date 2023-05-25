#pragma once

namespace Intermediate4Code
{
    class Bank
    {
    public:
        Bank();
        void depositMoney(int amount);
        int getBalance() const;

        int m_balance;
    };
}