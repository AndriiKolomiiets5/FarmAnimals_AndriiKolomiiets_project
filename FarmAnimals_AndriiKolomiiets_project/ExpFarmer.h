
#pragma once
#include <string>
class ExpFarmer {
public:
	std::string Name;
	std::string Surname;
	double exp;    //Experience
	explicit ExpFarmer(std::string _Name, std::string _Surname, double _exp);

	std::string GetName() const;
	std::string GetSurname() const;
	double GetExp() const;

	void SetName(std::string _Name);
	void SetSurname(std::string _Surname);
	void SetExp(double _exp);

	ExpFarmer(const ExpFarmer& other);
	ExpFarmer& operator=(const ExpFarmer&) = delete;
};