#include "gtest/gtest.h"

namespace
{
    class TestedCode
    {
    public:
        int getOne()
        {
            return 1;
        }
    };

    TEST(Beginner1, HelloWorld)
    {
        TestedCode testedObject;

        EXPECT_EQ(1, testedObject.getOne());
    }
}