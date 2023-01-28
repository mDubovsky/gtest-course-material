#include "gtest/gtest.h"

namespace
{
    class TestedCode
    {
        // TestedCode() { FAIL(); } // This would not compile
    };
    // Unit tests
    TEST(Beginner2, ThisShouldSucceed)
    {
        SUCCEED();
    }

    TEST(Beginner2, ThisFailsIfUncommented)
    {
        // FAIL(); This would fail no matter what
    }
}