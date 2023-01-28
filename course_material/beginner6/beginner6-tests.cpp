#include "gtest/gtest.h"

namespace
{
    // Tested code
    class TestedCode
    {
    public:
        const char* getSomeString() { return "Google test is easy!"; }
    };

    // Unit tests
    TEST(Beginner6, TestStringNotEqual)
    {
        TestedCode testedObject;

        EXPECT_STRNE("Testing is fun!", testedObject.getSomeString());
        EXPECT_STRNE("GOOGLE TEST IS EASY!", testedObject.getSomeString());
    }

    TEST(Beginner6, TestStringEqualCaseAgnostic)
    {
        TestedCode testedObject;

        EXPECT_STRCASEEQ("goOgLE tESt iS EaSY!", testedObject.getSomeString());
    }

    TEST(Beginner6, TestStringNotEqualCaseAgnostic)
    {
        TestedCode testedObject;

        //EXPECT_STRNE("GOOGLE TEST IS EASY!", testedObject.getSomeString()); This would fail!
        EXPECT_STRCASENE("Testing is fun!", testedObject.getSomeString());
    }
}