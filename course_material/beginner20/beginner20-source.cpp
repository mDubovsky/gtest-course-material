#include "beginner20-source.hpp"

namespace Beginner20Code
{
	Barista::Barista(CoffeeMachine& coffee_machine) : 
		m_coffeeMachine(coffee_machine) 
	{
	}

	void Barista::serveCoffee(std::string size, std::string type, bool addSugar)
	{
		std::string coffee(size);

		if(!type.empty())
			coffee += (" " + type);

		if (addSugar)
			coffee += " with sugar";

		m_coffeeMachine.makeCoffee(coffee);
	}
}