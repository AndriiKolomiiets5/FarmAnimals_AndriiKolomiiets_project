#include "Cow.h"
Cow::Cow(double _weight, double _age, double _HP, double _price) :
	Animal(_weight, _age, _HP, _price) {}
std::string Cow::Name() {
	return "Milka";
}
std::string Cow::AnimalName()
{
	return "Cow";
}
std::string Cow::Breed() {
	return "Holstein Friesian";
}
std::string Cow::Size() {
	return "Big";
}