#include "intermediate5-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Field;
using ::testing::Property;
using ::testing::Eq;

namespace Intermediate5Code
{
    // Unit tests
    TEST(Intermediate5, depositHundred)
    {
        Bank bank;
        bank.depositMoney(100);

        EXPECT_THAT(bank, Field(&Bank::m_balance, Eq(100)));
        EXPECT_THAT(bank, Property(&Bank::getBalance, Eq(100)));
    }
}