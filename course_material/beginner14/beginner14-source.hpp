#pragma once

// Tested code
namespace Beginner14Code
{
    class Thermometer 
    {
    public:
        virtual int getTemperatureCelsius();
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