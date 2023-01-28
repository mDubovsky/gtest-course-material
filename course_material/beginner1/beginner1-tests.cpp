#include "gtest/gtest.h"

namespace
{
    // Tested code
    class TestedCode
    {
    public:
        int getOne()
        {
            return 1;
        }
    };

    // Unit tests
    TEST(Beginner1, HelloWorld)
    {
        TestedCode testedObject;

        EXPECT_EQ(1, testedObject.getOne());
    }
}