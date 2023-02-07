#pragma once

// Tested code
namespace Beginner15Code
{
    // Tested code
    class CashRegister 
    {
    public:
        CashRegister();
        virtual void addCash(int dollars);

    protected:
        int m_cashSum;
    };

    class GroceryStore 
    {
    public:
        GroceryStore(CashRegister& cashRegister);
        void buyMilk();
        void buyBread();

    private:
        CashRegister& m_cashReg;
    };
}