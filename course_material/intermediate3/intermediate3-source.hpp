#pragma once

namespace Intermediate3Code
{
    class Vault
    {
    public:
        virtual void lockAwayMoney(int numCzechCrowns) = 0;
    };

    class Bank
    {
    public:
        Bank(Vault& vault);
        void depositMoney(int numCzechCrowns);

    private:
        Vault& m_vault;
    };
}