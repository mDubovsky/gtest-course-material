#include "intermediate1-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Ref;

namespace Intermediate1Code
{
    // Mocks
    class MockVault : public Vault {
    public:
        MOCK_METHOD(void, lockAwayMoney, (money_t& money), (override));
    };

    // Unit tests
    TEST(Intermediate1, depositMoney)
    {
        MockVault mockVault;
        Bank bank(mockVault);
        money_t savings{ 100, 5 };

        EXPECT_CALL(mockVault, lockAwayMoney(Ref(savings)));

        bank.depositMoney(savings);
    }

}