#include "Sheep.h"
Sheep::Sheep(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Sheep::Name() {
	return "Peppa";
}
std::string Sheep::AnimalName()
{
	return "Pig";
}
std::string Sheep::Breed() {
	return "White Big pig";
}
std::string Sheep::Size() {
	return "Small";
}