#pragma once

namespace Intermediate5Code
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