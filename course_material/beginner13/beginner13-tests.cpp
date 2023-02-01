#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner13-source.hpp"

using ::testing::AnyNumber;

namespace Beginner13Code
{
    // Mocks
    class MockDog : public Dog {
    public:
        MOCK_METHOD(void, bark, (), (override));
    };

    // Unit tests
    TEST(Beginner13, TestZeroCalls) {
        MockDog dog;
        Human human;

        EXPECT_CALL(dog, bark())
            .Times(0);

        human.meetDog(dog, Attitude::Friendly);
    }

    TEST(Beginner13, TestAnyNumberOfCalls) {
        MockDog dog;
        Human human;

        EXPECT_CALL(dog, bark())
            .Times(AnyNumber());

        human.meetDog(dog, Attitude::Aggressive);
    }
}