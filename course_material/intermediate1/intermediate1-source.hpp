#pragma once

namespace Intermediate1Code
{
    typedef struct
    {
        int euros;
        int cents;
    } money_t;

    class Vault
    {
    public:
        virtual void lockAwayMoney(money_t& money) = 0;
    };

    class Bank
    {
    public:
        Bank(Vault& vault);
        void depositMoney(money_t& money);

    private:
        Vault& m_vault;
    };
}