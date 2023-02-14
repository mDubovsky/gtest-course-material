#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner17-source.hpp"

using ::testing::Eq;
using ::testing::Ge;
using ::testing::Gt;
using ::testing::Le;
using ::testing::Lt;
using ::testing::Ne;
using ::testing::Return;

namespace Beginner17Code
{
    // Mocks
    class MockCoffeeMachine : public CoffeeMachine {
    public:
        MOCK_METHOD(std::string, makeCoffee, (int milliliters), (override));
    };

    // Unit tests
    TEST(Beginner17, TestEspressoRistretto) {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Lt(25)))
            .WillOnce(Return("Ristretto"));

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Ge(25)))
            .WillOnce(Return("Espresso"))
            .WillOnce(Return("Espresso"));

        EXPECT_EQ(barista.serveCoffee(20), "Ristretto");
        EXPECT_EQ(barista.serveCoffee(25), "Espresso");
        EXPECT_EQ(barista.serveCoffee(30), "Espresso");
    }

    TEST(Beginner17, TestCortadoMacchiato) {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Le(75)))
            .WillOnce(Return("Cortado"))
            .WillOnce(Return("Cortado"));

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Gt(75)))
            .WillOnce(Return("Macchiato"));

        EXPECT_EQ(barista.serveCoffee(70), "Cortado");
        EXPECT_EQ(barista.serveCoffee(75), "Cortado");
        EXPECT_EQ(barista.serveCoffee(90), "Macchiato");
    }

    TEST(Beginner17, TestMocha) {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Ne(150)))
            .WillOnce(Return("Not Mocha"));

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(Eq(150)))
            .WillOnce(Return("Mocha"));

        EXPECT_EQ(barista.serveCoffee(150), "Mocha");
        EXPECT_EQ(barista.serveCoffee(149), "Not Mocha");
    }
}