#include "gtest/gtest.h"


namespace
{
    // Tested code
    class TestedCode
    {
    public:
        double getPiAsDouble()
        {
            return 3.1415;
        }
    };

    // Unit tests
    TEST(Beginner4, TestDoubleEqual)
    {
        TestedCode testedObject;

        EXPECT_DOUBLE_EQ(3.1415, testedObject.getPiAsDouble());  // works to within 4 ULPs (Units in the Last Place)
    }

    TEST(Beginner4, TestNear)
    {
        TestedCode testedObject;

        EXPECT_NEAR(3.1417, testedObject.getPiAsDouble(), 0.0002);
    }
}