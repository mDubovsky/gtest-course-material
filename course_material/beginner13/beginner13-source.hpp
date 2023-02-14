#pragma once

// Tested code
namespace Beginner13Code
{
    enum class Attitude 
    {
        Friendly,
        Aggressive
    };
    
    class Dog 
    {
    public:
        virtual void bark();
    };

    class Human 
    {
    public:
        void meetDog(Dog& dog, Attitude dogsAttitude);
    };
}