#include "beginner18-source.hpp"

namespace Beginner18Code
{
	std::string AnimalTrainer::trainAnimal(const char* animal)
	{
		if (nullptr != animal)
		{
			return std::string("Trained animal trick");
		}
		else
		{
			return std::string("No animal available");
		}
	}

	Circus::Circus(AnimalTrainer& animal_trainer):
		m_animalTrainer(animal_trainer)
	{
	}

	std::string Circus::performCircus(const char* animal)
	{
		return m_animalTrainer.trainAnimal(animal);
	}
}