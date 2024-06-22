#pragma once
#include "Animal.h"
class Horse:public Animal {
public:
	Horse(double _weight, double _age, double _HP, double _price);

	std::string Name();
	std::string AnimalName();;
	std::string Breed();
	std::string Size();
};