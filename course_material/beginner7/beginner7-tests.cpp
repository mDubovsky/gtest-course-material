#include "gtest/gtest.h"

namespace
{
    // Tested code
    class TestedCode
    {
    public:
        // Asserts can't be used in Constructor/Destructor.
        // Gtest's ASSERT makes function return value, 
        // which Constructor/Destructor can't do.
        // Following would not compile.
        // TestedCode() { ASSERT_TRUE(true); };
        // virtual ~TestedCode() { ASSERT_TRUE(true); };

        int getOne() { return 1; }
        bool getTrue() { return true; }
        const char* getFooString() { return "Foo"; };
        float getPi() { return 3.14f; };
        void* getNull() { return NULL; };
    };

    // Unit tests
    TEST(Beginner7, TestAssert)
    {
        TestedCode testedObject;

        // if any of the following fails, the execution of TestAssert test will stop
        // other tests will still run, but not this one
        ASSERT_EQ(1, testedObject.getOne());
        ASSERT_TRUE(testedObject.getTrue());
        ASSERT_STREQ("Foo", testedObject.getFooString());
        ASSERT_FLOAT_EQ(3.14f, testedObject.getPi());
        ASSERT_EQ(NULL, testedObject.getNull());
    }
}