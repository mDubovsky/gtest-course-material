#pragma once

// Tested code
namespace Beginner16Code
{
    class Multiplier 
    {
    public:
        virtual int multiplyTwoNumbers(int a, int b);
    };

    class Calculator 
    {
    public:
        Calculator(Multiplier& multiplier);
        int multiply(int a, int b);
        int squared(int a);

    private:
        Multiplier& m_multi;
    };
}