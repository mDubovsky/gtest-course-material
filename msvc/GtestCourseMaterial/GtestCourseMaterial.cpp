#include "pch.h"
#include "gmock/gmock.h"

namespace MyFakeTests
{
    class FooChild
    {
    public:
        virtual void doThis() {}
        virtual bool doThat(int n, double x) { return false; }
    };

    class MockFooChild : public FooChild
    {
    public:
        MOCK_METHOD(void, doThis, (), (override));
        MOCK_METHOD(bool, doThat, (int n, double x), (override));
    };

    class FooFighter
    {
    public:
        void doSomething(FooChild& fooChild)
        {
            fooChild.doThis();
            fooChild.doThat(4, 5);
        }
    };
    TEST(TestCaseName, TestName) {
        EXPECT_EQ(1, 1);
        EXPECT_TRUE(true);
    }

    TEST(FooFighterTest, doSomethingTest)
    {
        MockFooChild mockFooChild;
        FooFighter fooFighter;

        // doThis() must be called exactly 1 time.
        EXPECT_CALL(mockFooChild, doThis).Times(1);

        // doThat() must be called exactly 1 time with parameters 4,5
        EXPECT_CALL(mockFooChild, doThat(4, 5)).Times(1);

        fooFighter.doSomething(mockFooChild);
    }
}