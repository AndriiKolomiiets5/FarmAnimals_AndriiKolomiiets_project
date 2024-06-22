
#pragma once
#include <string>
class ExpFarmer {
public:
	std::string Name;
	std::string Surname;
	double money;    
	explicit ExpFarmer(std::string _Name, std::string _Surname, double _money);

	std::string GetName() const;
	std::string GetSurname() const;
	double GetMoney() const;

	void SetName(std::string _Name);
	void SetSurname(std::string _Surname);
	void SetMoney(double _money);

	ExpFarmer(const ExpFarmer& other);
	ExpFarmer& operator=(const ExpFarmer&) = delete;
};