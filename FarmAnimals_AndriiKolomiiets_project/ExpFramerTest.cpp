
#include <iostream>
#include "ExpFramerTest.h"
#include "Animal.h"
#include <chrono>
#include <thread>
using namespace std;

void Testname(ExpFarmer* z) {
    cout << z->GetName() << " ";
    cout << z->GetSurname() << " ";
    cout << z->GetMoney()<< " zl" << endl;
}

void TestExp(ExpFarmer* z, Animal* x) {
   
    cout << "Experienced Farmer "<<z->GetName()<<" went to near farm to buy a " << x->AnimalName() << ". Let's see if he can do this." << endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    cout << "For this animal he has to pay" << x->GetPrice() << " zl "<< endl;
    this_thread::sleep_for(chrono::milliseconds(100));
   
    if (z->GetMoney() < x->GetPrice())
    {
        cout << "Sorry,you don't have enough money,try to buy another animal";
    }
    else {
        cout << "Congratulations,now you have a new animal on your farm";
    }
}
