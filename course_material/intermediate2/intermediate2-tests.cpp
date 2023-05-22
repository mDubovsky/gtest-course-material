#include "intermediate2-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Pointee;
using ::testing::Eq;

namespace Intermediate2Code
{
    // Mocks
    class MockVault : public Vault {
    public:
        MOCK_METHOD(void, lockAwayMoney, (int* money), (override));
    };

    // Unit tests
    TEST(Intermediate2, depositMoney)
    {
        MockVault mockVault;
        Bank bank(mockVault);
        int savings = 100;

        EXPECT_CALL(mockVault, lockAwayMoney(Pointee(Eq(100))));

        bank.depositMoney(&savings);
    }

}