#include "ExpFarmer.h"

ExpFarmer::ExpFarmer(std::string _Name, std::string _Surname, double _exp) :
    Name(_Name),Surname(_Surname),exp(_exp){}

std::string ExpFarmer::GetName() const {
    return Name;
}

std::string ExpFarmer::GetSurname() const {
    return Surname;
}

double ExpFarmer::GetExp() const {
    return exp;
}

void ExpFarmer::SetName(std::string _Name) {
    Name = _Name;
}

void ExpFarmer::SetSurname(std::string _Surname) {
    Surname = _Surname;
}

void ExpFarmer::SetExp(double _exp) {
    exp = _exp;
}

ExpFarmer::ExpFarmer(const ExpFarmer& other) :
    Name(other.Name),Surname(other.Surname),exp(other.exp){}