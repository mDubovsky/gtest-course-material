#pragma once

// Tested code
namespace Beginner14Code
{
    // Tested code
    class Thermometer 
    {
    public:
        virtual int getTemperature();
    };

    class FreezingIndicator 
    {
    public:
        FreezingIndicator(Thermometer& thermometer);
        bool isItFreezing();

    private:
        Thermometer& m_therm;
    };
}