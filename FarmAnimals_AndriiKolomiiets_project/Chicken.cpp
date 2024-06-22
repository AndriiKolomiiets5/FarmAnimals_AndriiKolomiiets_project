#include "Chicken.h"
Chicken::Chicken(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Chicken::Name() {
	return "Jemima";
}
std::string Chicken::AnimalName()
{
	return "Chicken";
}
std::string Chicken::Breed() {
	return "Cochin";
}
std::string Chicken::Size() {
	return "Small"
}