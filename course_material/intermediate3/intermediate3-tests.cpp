#include "intermediate3-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Truly;

namespace Intermediate3Code
{
    // Mocks
    class MockVault : public Vault {
    public:
        MOCK_METHOD(void, lockAwayMoney, (int numCzechCrowns), (override));
    };

    // Predicates
    bool IsAtLeastADollar(int numCzechCrowns) { return numCzechCrowns > 22; }

    // Unit tests
    TEST(Intermediate3, isDollar)
    {
        MockVault mockVault;
        Bank bank(mockVault);
        int savingsCzk = 122;

        EXPECT_CALL(mockVault, lockAwayMoney(Truly(IsAtLeastADollar)));

        bank.depositMoney(savingsCzk);
    }

}