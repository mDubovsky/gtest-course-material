#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace
{
    // Tested code
    class Warehouse {
    public:
        virtual void sendTheItem() { std::cout << "Item sent!" << std::endl; }
    };

    class EShop {
    public:
        void makePurchase(Warehouse& wh) { wh.sendTheItem(); };
    };

    // Mocks
    class MockWarehouse : public Warehouse {
    public:
        MOCK_METHOD(void, sendTheItem, (), (override));
    };

    // Unit tests
    TEST(Beginner10, HelloMock) {
        MockWarehouse warehouse;
        EShop eshop;

        EXPECT_CALL(warehouse, sendTheItem())
            .Times(1);

        eshop.makePurchase(warehouse);
    }
}