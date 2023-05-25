#include "intermediate6-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::AllOf;
using ::testing::Ge;
using ::testing::Le;

namespace Intermediate6Code
{
    // Unit tests
    TEST(Intermediate6, depositHundred)
    {
        Bank bank;
        bank.depositMoney(100);

        EXPECT_THAT(bank.getBalance(), AllOf(Ge(90), Le(110)));
    }
}