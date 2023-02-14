#include "beginner17-source.hpp"

namespace Beginner17Code
{
	std::string CoffeeMachine::makeCoffee(int milliliters)
	{
		return std::string();
	}

	Barista::Barista(CoffeeMachine& coffee_machine):
		m_coffeeMachine(coffee_machine)
	{
	}

	std::string Barista::serveCoffee(int milliliters)
	{
		return m_coffeeMachine.makeCoffee(milliliters);
	}
}