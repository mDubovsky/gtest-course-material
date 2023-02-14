#pragma once
#include <string>

// Tested code
namespace Beginner17Code
{
	class CoffeeMachine {
	public:
		virtual std::string makeCoffee(int milliliters);
	};

	class Barista {
	public:
		Barista(CoffeeMachine& coffee_machine);
		std::string serveCoffee(int milliliters);

	private:
		CoffeeMachine& m_coffeeMachine;
	};
}