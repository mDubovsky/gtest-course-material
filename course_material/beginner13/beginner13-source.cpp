#include "beginner13-source.hpp"
#include <iostream>
#include <cstdlib>

namespace Beginner13Code
{
	void Dog::bark()
	{
		std::cout << "Woof!" << std::endl;
	}

	void Human::meetDog(Dog& dog, Attitude dogsAttitude)
	{
		// bark random amount of times if the dog is aggressive
		if (dogsAttitude == Attitude::Aggressive)
		{
			// call Warehouse::sendItem() random number of times
			srand((unsigned)time(NULL));
			short randNum = (rand() % 10) + 1; // random number from 1 to 10
			for (int i = 0; i < randNum; i++)
			{
				dog.bark();
			}
		}
	}
}