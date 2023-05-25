#pragma once

namespace Intermediate7Code
{
    class Bank
    {
    public:
        Bank();
        void depositMoney(int amount);
        int getBalance() const;

    private:
        int m_balance;
    };
}