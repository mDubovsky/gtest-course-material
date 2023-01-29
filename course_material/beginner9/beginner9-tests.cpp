#include "gtest/gtest.h"

namespace
{
    // Tested code
    class TestedCode
    {
    public:
        int getOne() { return 1; }
    };

    // Unit tests
    TEST(Beginner9, ThisTestShouldRun)
    {
        TestedCode testedObject;

        EXPECT_EQ(1, testedObject.getOne());
    }

    TEST(Beginner9, DISABLED_ThisTestIsDisabled)
    {
        // Not sure what this test should look like so I disabled it
    }
}