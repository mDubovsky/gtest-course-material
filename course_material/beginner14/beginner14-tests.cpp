#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner14-source.hpp"

using ::testing::Return;

namespace Beginner14Code
{
    // Mocks
    class MockThermometer : public Thermometer {
    public:
        MOCK_METHOD(int, getTemperature, (), (override));
    };

    // Unit tests
    TEST(Beginner14, TestFreezingOnce) {
        MockThermometer thermometer;
        FreezingIndicator indicator(thermometer);

        EXPECT_CALL(thermometer, getTemperature())
            .WillOnce(Return(-1)); // it's implied we're expecting one call

        EXPECT_TRUE(indicator.isItFreezing());
    }

    TEST(Beginner14, TestNotFreezing) {
        MockThermometer thermometer;
        FreezingIndicator indicator(thermometer);

        EXPECT_CALL(thermometer, getTemperature())
            .WillRepeatedly(Return(20)); // it's implied we're expecting any amount of calls

        EXPECT_FALSE(indicator.isItFreezing());
        EXPECT_FALSE(indicator.isItFreezing());
        EXPECT_FALSE(indicator.isItFreezing());
    }

    TEST(Beginner14, TestFreezingNotFreezing) {
        MockThermometer thermometer;
        FreezingIndicator indicator(thermometer);

        EXPECT_CALL(thermometer, getTemperature())
            .Times(3)
            .WillOnce(Return(15))
            .WillOnce(Return(5))
            .WillOnce(Return(-1));

        EXPECT_FALSE(indicator.isItFreezing());
        EXPECT_FALSE(indicator.isItFreezing());
        EXPECT_TRUE(indicator.isItFreezing());
    }
}