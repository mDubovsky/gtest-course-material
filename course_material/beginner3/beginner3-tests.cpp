#include "gtest/gtest.h"
#include "beginner3-source.hpp"

namespace
{
    // Unit tests
    TEST(Beginner3, TestBoolean)
    {
        TestedCode testedObject;

        EXPECT_TRUE(testedObject.getTrue());
        EXPECT_FALSE(!testedObject.getTrue());
    }

    TEST(Beginner3, TestInteger)
    {
        TestedCode testedObject;

        EXPECT_EQ(1, testedObject.getOne());
    }

    TEST(Beginner3, TestPtr)
    {
        TestedCode testedObject;

        EXPECT_EQ(NULL, testedObject.getNull());
    }

    TEST(Beginner3, TestString)
    {
        TestedCode testedObject;

        EXPECT_STREQ("Foo", testedObject.getFooString());
    }

    TEST(Beginner3, TestFloat)
    {
        TestedCode testedObject;

        EXPECT_FLOAT_EQ(3.14f, testedObject.getPi());
    }
}