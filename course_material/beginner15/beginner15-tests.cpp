#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "beginner15-source.hpp"

using ::testing::Return;

namespace Beginner15Code
{
    // Mocks
    class MockCashRegister : public CashRegister {
    public:
        MOCK_METHOD(void, addCash, (int), (override));
    };

    // Unit tests
    TEST(Beginner15, TestBuyMilk) {
        MockCashRegister cashRegister;
        GroceryStore store(cashRegister);

        EXPECT_CALL(cashRegister, addCash(3))
            .Times(1);
        
        store.buyMilk();
    }

    TEST(Beginner15, TestBuyBread) {
        MockCashRegister cashRegister;
        GroceryStore store(cashRegister);

        EXPECT_CALL(cashRegister, addCash(2))
            .Times(1);

        store.buyBread();
    }
}