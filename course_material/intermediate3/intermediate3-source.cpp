#include "intermediate3-source.hpp"

namespace Intermediate3Code
{
    Bank::Bank(Vault& vault) :
        m_vault(vault) 
    {}

    void Bank::depositMoney(int numCzechCrowns)
    {
        m_vault.lockAwayMoney(numCzechCrowns);
    }
}