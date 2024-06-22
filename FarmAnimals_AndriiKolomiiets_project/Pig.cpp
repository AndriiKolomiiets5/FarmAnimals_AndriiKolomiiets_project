#include "Pig.h"
Pig::Pig(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Pig::Name() {
	return "Peppa";
}
std::string Pig::AnimalName()
{
	return "Pig";
}
std::string Pig::Breed() {
	return "White Big pig";
}
std::string Pig::Size() {
	return "Small";
}