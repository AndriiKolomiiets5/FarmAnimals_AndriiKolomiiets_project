#pragma once
#include <iostream>
#include <string>
class Animal {
 protected:
	 double weight;
	 double age;
	 double HP;
	 double price;
	 explicit Animal(double _weight, double _age, double _HP,double _price);
public:
	virtual ~Animal(){}
	virtual std::string Name() = 0;
	virtual std::string AnimalName() = 0;
	virtual std::string Breed() = 0;
	virtual std::string Size() = 0;
	double GetWeight() const;
	double GetAge() const;
	double GetHP() const;
	double GetPrice() const;

	void SetWeight(double _weight);
	void SetHP(double _HP);
	void SetAge(double _age);
	void SetPrice(double _price);

	Animal(const Animal& other);
	Animal& operator=(const Animal&) = delete;
















};
