#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner18-source.hpp"

using ::testing::Return;
using ::testing::IsNull;
using ::testing::NotNull;

namespace Beginner18Code
{
    // Mocks
    class MockAnimalTrainer : public AnimalTrainer {
    public:
        MOCK_METHOD(std::string, trainAnimal, (const char* animal), (override));
    };

    // Unit tests
    TEST(Beginner18, TestCircusWithAnimals) {
        MockAnimalTrainer mockAnimalTrainer;
        Circus circus(mockAnimalTrainer);

        EXPECT_CALL(mockAnimalTrainer, trainAnimal(NotNull()))
            .WillOnce(Return("Trained seal trick"))
            .WillOnce(Return("Trained elephant trick"));

        EXPECT_CALL(mockAnimalTrainer, trainAnimal(IsNull()))
            .WillOnce(Return("No animal available"));

        EXPECT_EQ(circus.performCircus("seal"), "Trained seal trick");
        EXPECT_EQ(circus.performCircus("elephant"), "Trained elephant trick");
        EXPECT_EQ(circus.performCircus(nullptr), "No animal available");
    }
}