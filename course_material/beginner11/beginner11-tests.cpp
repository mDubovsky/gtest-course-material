#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace
{
    // Tested code
    class Warehouse {
    public:
        virtual void sendItem();
        virtual void sendItems(int itemId, int numItems);
        virtual int getNumItemsSent() const;
        virtual void closeWarehouse() noexcept;
        virtual void updateInventory(std::map<int, int> itemIdAmount, bool notify);
        virtual void updateInventory2(std::map<int, int> itemIdAmount, bool notify);
    };

    // Mocks
    class MockWarehouse : public Warehouse {
    public:
        MOCK_METHOD(void, sendItem, (), (override));
        MOCK_METHOD(void, sendItems, (int, int), (override));
        MOCK_METHOD(int, getNumItemsSent, (), (override, const));
        MOCK_METHOD(void, closeWarehouse, (), (override, noexcept));
        MOCK_METHOD(void, updateInventory, ((std::map<int, int>), bool), (override)); // note that the first argument has to be surrounded by parentheses
        
        using intIntMap = std::map<int, int>;  // Another solution - use type aliases
        MOCK_METHOD(void, updateInventory2, (intIntMap, bool), (override));
    };

    // Unit tests
    TEST(Beginner11, ArbitraryTest) {
        SUCCEED();
    }
}