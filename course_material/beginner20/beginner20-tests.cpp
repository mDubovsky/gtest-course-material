#include "beginner20-source.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::EndsWith;
using ::testing::HasSubstr;
using ::testing::IsEmpty;
using ::testing::StartsWith;
using ::testing::StrCaseEq;
using ::testing::StrCaseNe;
using ::testing::StrEq;
using ::testing::StrNe;
using ::testing::ContainsRegex;
using ::testing::MatchesRegex;

namespace Beginner20Code
{
    // Mocks
    class MockCoffeeMachine : public CoffeeMachine {
    public:
        MOCK_METHOD(void, makeCoffee, (std::string sizeAndType), (override));
    };

    TEST(Beginner20, IsEspresso) 
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(EndsWith("Espresso")));  // small Espresso

        barista.serveCoffee("small", "Espresso", false);
    }

    TEST(Beginner20, ContainsSugar)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(HasSubstr("sugar")));  // small Espresso with sugar

        barista.serveCoffee("small", "Espresso", true);
    }

    TEST(Beginner20, EmptyOrder)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(IsEmpty()));  // nothing

        barista.serveCoffee("", "", false);
    }

    TEST(Beginner20, SmallOrder)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(StartsWith("small"))); // small Latte

        barista.serveCoffee("small", "Latte", false);
    }

    TEST(Beginner20, OrderEqual)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(StrCaseEq("SMALL LATTE")));
        EXPECT_CALL(mockCoffeeMachine, makeCoffee(StrEq("small Cappuccino")));

        barista.serveCoffee("small", "Latte", false);
        barista.serveCoffee("small", "Cappuccino", false);
    }

    TEST(Beginner20, OrderNotEqual)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(StrCaseNe("SMALL ESPRESSO")));
        EXPECT_CALL(mockCoffeeMachine, makeCoffee(StrNe("small Coffee")));

        barista.serveCoffee("small", "Coffee", false);
        barista.serveCoffee("small", "Espresso", false);
    }

    TEST(Beginner20, ContainsRegex)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(ContainsRegex("small.*"))); // starts with "small"

        barista.serveCoffee("small", "Latte", false);
    }

    TEST(Beginner20, MatchesRegex)
    {
        MockCoffeeMachine mockCoffeeMachine;
        Barista barista(mockCoffeeMachine);

        EXPECT_CALL(mockCoffeeMachine, makeCoffee(MatchesRegex("^s.*e$"))); // starts with an "s" and ends with an "e"

        barista.serveCoffee("small", "Latte", false);
    }
}