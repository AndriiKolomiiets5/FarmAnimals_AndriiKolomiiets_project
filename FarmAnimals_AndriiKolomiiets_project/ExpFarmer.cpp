#include "ExpFarmer.h"

ExpFarmer::ExpFarmer(std::string _Name, std::string _Surname, double _money) :
    Name(_Name),Surname(_Surname),money(_money){}

std::string ExpFarmer::GetName() const {
    return Name;
}

std::string ExpFarmer::GetSurname() const {
    return Surname;
}

double ExpFarmer::GetMoney() const {
    return money;
}

void ExpFarmer::SetName(std::string _Name) {
    Name = _Name;
}

void ExpFarmer::SetSurname(std::string _Surname) {
    Surname = _Surname;
}

void ExpFarmer::SetMoney(double _money) {
    money = _money;
}

ExpFarmer::ExpFarmer(const ExpFarmer& other) :
    Name(other.Name),Surname(other.Surname),money(other.money){}