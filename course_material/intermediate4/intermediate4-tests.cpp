#include "intermediate4-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Field;
using ::testing::Property;
using ::testing::Eq;

namespace Intermediate4Code
{
    // Unit tests
    TEST(Intermediate4, depositHundred)
    {
        Bank bank;
        bank.depositMoney(100);

        EXPECT_THAT(bank.getBalance(), Eq(100));
        EXPECT_THAT(bank.m_balance, Eq(100));
    }
}