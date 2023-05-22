#pragma once
#include <string>

namespace Beginner20Code
{
	class CoffeeMachine {
	public:
		virtual void makeCoffee(std::string sizeAndtype) = 0;
	};

	class Barista {
	public:
		Barista(CoffeeMachine& coffee_machine);
		void serveCoffee(std::string size, std::string type, bool addSugar);

	private:
		CoffeeMachine& m_coffeeMachine;
	};
}