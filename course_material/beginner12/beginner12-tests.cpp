#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace
{
    class Warehouse {
    public:
        Warehouse();
        virtual void sendItem();
        virtual void sendMoreItems(int numItems);
        virtual void setNumItemsOnStorage(short itemId, int numItems);
        virtual int getNumItems(short itemId) const;
    };

    // Mocks
    class MockWarehouse : public Warehouse {
    public:
        // MOCK_METHOD0..10
        MOCK_METHOD0(sendItem, void());
        MOCK_METHOD1(sendMoreItems, void(int));
        MOCK_METHOD2(setNumItemsOnStorage, void(short, int));
        MOCK_CONST_METHOD1(getNumItems, int(short));
    };

    // Unit tests
    TEST(Beginner12, ArbitraryTest) {
        SUCCEED();
    }
}