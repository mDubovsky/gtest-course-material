#include "beginner19-source.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::DoubleEq;
using ::testing::IsNan;
using ::testing::NanSensitiveDoubleEq;
using ::testing::Return;

namespace Beginner19Code
{
    class MockRobotController : public RobotController 
    {
    public:
        MOCK_METHOD(double, GetBatteryLevel, (double x, double y), (override));
    };

    TEST(Beginner19, GetsBatteryLevel) 
    {
        MockRobotController mockRobotController;
        ToyRobot toyRobot(mockRobotController);

        EXPECT_CALL(mockRobotController, GetBatteryLevel(DoubleEq(0.0), DoubleEq(0.0)))
            .WillOnce(Return(100.0));
        EXPECT_CALL(mockRobotController, GetBatteryLevel(DoubleEq(2.0), DoubleEq(3.0)))
            .WillOnce(Return(75.0));
        EXPECT_CALL(mockRobotController, GetBatteryLevel(DoubleEq(5.0), DoubleEq(-1.0)))
            .WillOnce(Return(NAN));

        EXPECT_THAT(toyRobot.GetBatteryLevel(0.0, 0.0), DoubleEq(100.0));
        EXPECT_THAT(toyRobot.GetBatteryLevel(2.0, 3.0), NanSensitiveDoubleEq(75.0));
        EXPECT_THAT(toyRobot.GetBatteryLevel(5.0, -1.0), IsNan());
    }
}