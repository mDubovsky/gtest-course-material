#include "gtest/gtest.h"
#include "beginner8-source.hpp"

namespace
{
    // Test fixture
    class Beginner8 : public ::testing::Test
    {
    protected:
        void SetUp() override  // runs before the test
        {
            m_wallet.setBalance(5);
        }

        void TearDown() override  // runs after the test
        {
            m_wallet.setBalance(0);  // set balance to 0 to satisfy assert in wallets destructor
        }

        Wallet m_wallet; // wallet is getting created/destroyed with each test
    };

    // Unit tests
    TEST_F(Beginner8, TestAddBalanceZero)
    {
        m_wallet.addBalance(0);

        EXPECT_EQ(5, m_wallet.getBalance());
    }

    TEST_F(Beginner8, TestAddBalanceTwo)
    {
        m_wallet.addBalance(2);

        EXPECT_EQ(7, m_wallet.getBalance());
    }

    TEST_F(Beginner8, TestAddBalanceALot)
    {
        m_wallet.addBalance(999);

        EXPECT_EQ(1004, m_wallet.getBalance());
    }
}