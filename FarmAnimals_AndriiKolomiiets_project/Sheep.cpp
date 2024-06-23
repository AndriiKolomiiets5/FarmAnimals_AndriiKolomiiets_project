#include "Sheep.h"
Sheep::Sheep(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Sheep::Name() {
	return "Suzy";
}
std::string Sheep::AnimalName()
{
	return "Sheep";
}
std::string Sheep::Breed() {
	return "Merino";
}
std::string Sheep::Size() {
	return "Medium";
}