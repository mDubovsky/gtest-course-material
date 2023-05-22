#include "intermediate1-source.hpp"

namespace Intermediate1Code
{
    Bank::Bank(Vault& vault) :
        m_vault(vault) 
    {}

    void Bank::depositMoney(money_t& money)
    {
        m_vault.lockAwayMoney(money);
    }
}