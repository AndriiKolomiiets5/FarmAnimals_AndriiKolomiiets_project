#include <string>
#include <thread>
#include <iostream>
#include <chrono> 
#include <Windows.h>
#include <cstdlib> 
#include <ctime> 
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Horse.h"
#include "Pig.h"
#include "Sheep.h"
#include "ExpFarmer.h"
#include "ExpFarmerTest.h"
#include "AnimalTest.h"

using namespace std;

int main()
{


    srand(time(NULL));
    int FarmMoney = 1 + rand() % 2000;





    cout << "<__Welcome to the Farm__>\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "List of the Animals:" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    //
    Pig Pig_(15, 7, 98, 400);
    TestAnimal(&Pig_);
    cout << "----------------------" << "\n";
    //
    this_thread::sleep_for(chrono::seconds(2));
    Horse Horse_(67, 12, 78, 1300);
    TestAnimal(&Horse_);
    cout << "----------------------" << "\n";
    //

    this_thread::sleep_for(chrono::seconds(2));
    Cow Cow_(90, 15, 45, 1000);
    TestAnimal(&Cow_);
    cout << "----------------------" << "\n";
    //


    this_thread::sleep_for(chrono::seconds(2));
    Chicken Chicken_(5, 2, 67, 100);
    TestAnimal(&Chicken_);
    cout << "----------------------" << "\n";
    //
    this_thread::sleep_for(chrono::seconds(2));
    Sheep Sheep_(20, 5, 89, 400);
    TestAnimal(&Sheep_);
    cout << "----------------------" << "\n";
    //

    ExpFarmer ExpFarmer("Warren", "Tomson", FarmMoney);

    TestFarmer(&ExpFarmer);
    TestExp(&ExpFarmer, &Cow_);
    cout << "-----------" << endl;
    cout << "Week after:" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    FarmMoney = 1 + rand() % 2000;
    ExpFarmer.SetMoney(FarmMoney);
    TestFarmer(&ExpFarmer);
    TestExp(&ExpFarmer, &Pig_);

    cout << "--------" << endl;
    cout << "2 weeks after:" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    FarmMoney = 1 + rand() % 2000;
    ExpFarmer.SetMoney(FarmMoney);

    TestFarmer(&ExpFarmer);
    TestExp(&ExpFarmer, &Horse_);

    cout << "--------" << endl;
    cout << "3 weeks after:" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    FarmMoney = 1 + rand() % 2000;
    ExpFarmer.SetMoney(FarmMoney);

    TestFarmer(&ExpFarmer);
    TestExp(&ExpFarmer, &Chicken_);

    cout << "------------------------------" << endl;
    cout << "4 weeks after:" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    FarmMoney = 1 + rand() % 2000;
    ExpFarmer.SetMoney(FarmMoney);

    TestFarmer(&ExpFarmer);
    TestExp(&ExpFarmer, &Sheep_);


    return 0;
}