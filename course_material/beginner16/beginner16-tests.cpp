#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner16-source.hpp"

using ::testing::Return;

namespace Beginner16Code
{
    // Mocks
    class MockMultiplier : public Multiplier {
    public:
        MOCK_METHOD(int, multiplyTwoNumbers, (int, int), (override));
    };

    // Unit tests
    TEST(Beginner16, TestMultiplication) {
        MockMultiplier multiplier;
        Calculator calculator(multiplier);

        // It doesn't matter in which order we set the expectations
        // The mock will return number based on expected arguments
        EXPECT_CALL(multiplier, multiplyTwoNumbers(3, 3))
            .WillOnce(Return(9));
        EXPECT_CALL(multiplier, multiplyTwoNumbers(1, 2))
            .WillOnce(Return(2));
        
        EXPECT_EQ(2, calculator.multiply(1, 2));
        EXPECT_EQ(9, calculator.squared(3));
    }
}