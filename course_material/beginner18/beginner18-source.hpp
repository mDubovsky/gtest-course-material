#pragma once
#include <string>

// Tested code
namespace Beginner18Code
{
	class AnimalTrainer {
	public:
		virtual std::string trainAnimal(const char* animal);
	};

	class Circus {
	public:
		Circus(AnimalTrainer& animal_trainer);
		std::string performCircus(const char* animal);

	private:
		AnimalTrainer& m_animalTrainer;
	};
}