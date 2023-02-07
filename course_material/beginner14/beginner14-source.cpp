#include "beginner14-source.hpp"
#include <iostream>
#include <cstdlib>

namespace Beginner14Code
{
	int Thermometer::getTemperatureCelsius()
	{
		srand((unsigned)time(NULL));
		int randTemp = (rand() % 61) - 20; // random number from -20 to 40
		return randTemp;
	}

	FreezingIndicator::FreezingIndicator(Thermometer& thermometer):
		m_therm(thermometer)
	{
	}

	bool FreezingIndicator::isItFreezing()
	{
		return m_therm.getTemperatureCelsius() <= 0;
	}
}