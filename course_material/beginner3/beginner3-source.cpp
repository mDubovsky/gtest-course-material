#include "beginner3/beginner3-source.hpp"
#include <stddef.h> // NULL is defined here

bool TestedCode::getTrue() 
{ 
	return true; 
};

int TestedCode::getOne() 
{ 
	return 1; 
};

const char* TestedCode::getFooString() 
{ 
	return "Foo"; 
};

float TestedCode::getPi() 
{ 
	return 3.14f; 
};

void* TestedCode::getNull()
{
	return NULL;
}