#include "Animal.h"

Animal::Animal(double _weight, double _age, double _HP, double _price):
	weight(_weight),age(_age),HP(_HP),price(_price){}
double Animal::GetWeight() const {
	return weight;
}
double Animal::GetAge() const {
	return age;
}
double Animal::GetHP() const {
	return HP;
}
double Animal::GetPrice() const {
	return price;
}
void Animal::SetWeight(double _weight) {
	weight = _weight;
}
void Animal::SetAge(double _age) {
	age = _age;
}
void Animal::SetHP(double _HP) {
	HP = _HP;

}
void Animal::SetPrice(double _price) {
	price = _price;
}
Animal::Animal(const Animal& other):
	weight(other.weight),age(other.age),HP(other.HP),price(other.price){}