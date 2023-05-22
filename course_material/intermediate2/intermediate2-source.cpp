#include "intermediate2-source.hpp"

namespace Intermediate2Code
{
    Bank::Bank(Vault& vault) :
        m_vault(vault) 
    {}

    void Bank::depositMoney(int* money)
    {
        m_vault.lockAwayMoney(money);
    }
}