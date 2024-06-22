#include "Horse.h"
Chicken::Chicken(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Horse::Name() {
	return "Spirit";
}
std::string Horse::AnimalName()
{
	return "Horse";
}
std::string Horse::Breed() {
	return "Arabian horse";
}
std::string Horse::Size() {
	return "big";
}