
#include <iostream>
#include "ExpFarmerTest.h"
#include "Animal.h"
#include <chrono>
#include <thread>
using namespace std;

void TestFarmer(ExpFarmer* z) {
    cout << z->GetName() << " ";
    cout << z->GetSurname() << " ";
    cout << z->GetMoney()<< " zl" << endl;
}

void TestExp(ExpFarmer* z, Animal* x) {
   
    cout << "Experienced Farmer "<<z->GetName()<<" went to near farm to buy a " << x->AnimalName() << ". Let's see if he can do this.\n" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "For this animal he has to pay " << x->GetPrice() << " zl "<< endl;
    this_thread::sleep_for(chrono::seconds(2));
   
    if (z->GetMoney() < x->GetPrice())
    {
        cout << "Sorry cowboy,you don't have enough money to buy "<<x->Name()<<", try to buy another animal next time\n";
    }
    else {
        cout << "Congratulations,now you have a new animal on your farm\n";
    }
}
