#include "gtest/gtest.h"
#include "beginner5/beginner5-source.hpp"

namespace
{
    // Unit tests
    TEST(Beginner5, TestNotEqual)
    {
        TestedCode testedObject;

        EXPECT_NE(0, testedObject.getFortyTwo());
        // EXPECT_NE(NULL, testedObject.getNull());  // this is not supported and will not compile
    }

    TEST(Beginner5, TestLessThan)
    {
        TestedCode testedObject;

        EXPECT_LT(9, testedObject.getFortyTwo());
    }

    TEST(Beginner5, TestLessOrEqual)
    {
        TestedCode testedObject;

        EXPECT_LE(42, testedObject.getFortyTwo());
    }

    TEST(Beginner5, TestGreaterThan)
    {
        TestedCode testedObject;

        EXPECT_GT(50, testedObject.getFortyTwo());
    }

    TEST(Beginner5, TestGreaterOrEqual)
    {
        TestedCode testedObject;

        EXPECT_GE(42, testedObject.getFortyTwo());
    }
}