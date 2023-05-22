#pragma once

namespace Intermediate2Code
{
    class Vault
    {
    public:
        virtual void lockAwayMoney(int* money) = 0;
    };

    class Bank
    {
    public:
        Bank(Vault& vault);
        void depositMoney(int* money);

    private:
        Vault& m_vault;
    };
}