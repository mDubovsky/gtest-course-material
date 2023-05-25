#include "intermediate7-source.hpp"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::AllOf;
using ::testing::Ge;
using ::testing::Le;
using ::testing::Matcher;

namespace Intermediate7Code
{
    // Unit tests
    TEST(Intermediate7, depositHundred)
    {
        Bank bank1;
        Bank bank2;
        Bank bank3;
        Matcher<int> inRange = AllOf(Ge(90), Le(110));

        bank1.depositMoney(90);
        bank2.depositMoney(100);
        bank3.depositMoney(110);

        EXPECT_THAT(bank1.getBalance(), inRange);
        EXPECT_THAT(bank2.getBalance(), inRange);
        EXPECT_THAT(bank3.getBalance(), inRange);
    }
}