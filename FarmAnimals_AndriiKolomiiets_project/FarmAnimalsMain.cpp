?#include <iostream>
#include <string>
#include <thread>
#include <chrono> 
#include <Windows.h>
#include <cstdlib> 
#include <ctime> 
#include "Animal.h"
#include "Chiken.h"
#include "Cow.h"
#include "Horse.h"
#include "Pig.h"
#include "Souffle.h"
#include "Sheep.h"
#include "ExpFarmer.h"
#include "ExpFarmerTest.h"
#include "AnimalTest.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int FarmMoney = 1 + rand() % 1000;


    SMALL_RECT rect;
    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = 50;
    rect.Right = 100;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleWindowInfo(hConsole, TRUE, &rect);

    cout << "Welcome to the Farm\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "List of the Animals" << endl;
    this_thread::sleep_for(chrono::milliseconds(300));
    //
    cout << "Pig";
    this_thread::sleep_for(chrono::milliseconds(300));
    Pig Pig_(14, 3, 98, 600);
    TestAnimal(&Pig_);
    //
    cout << "\t Horse \n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Horse Horse_(67, 12, 78, 1300);
    TestAnimal(&Horse_);
    //
    cout << "\t Cow \n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Cow Cow_(90, 15, 45, 1000);
    TestAnimal(&Cow_);
    //
    
    cout << "\tChicken\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Chicken Chicken_(5, 2, 67, 100);
    TestAnimal(&Chicken_);
    //
    cout << "\tSheep\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Sheep Sheep_(20, 5, 89, 400);
    TestAnimal(&Sheep_);
    //
    cout << "Which Animal you would like to buy" << endl;
    ExpFarmer ExpFarmer("Key", "molt", FarmMoney);

    TestName(&ExpFarmer);
    TestExp(&ExpFarmer, &Cow_);

    cout << "-----------" << endl;
    cout << "Week after:" << endl;
    this_thread::sleep_for(chrono::milliseconds(600));
    TestName(&ExpFarmer);
    TestExp(&ExpFarmer, &Pig_);

    cout << "--------" << endl;
    cout << "2 weeks after:" << endl;
    this_thread::sleep_for(chrono::milliseconds(600));

    TestName(&ExpFarmer);
    TestExp(&ExpFarmer, &Horse_);

    cout << "--------" << endl;
    cout << "3 weeks after:" << endl;
    this_thread::sleep_for(chrono::milliseconds(600));

    TestName(&ExpFarmer);
    TestExp(&ExpFarmer, &Chicken_);

    cout << "------------------------------" << endl;
    cout << "Next day:" << endl;
    this_thread::sleep_for(chrono::milliseconds(900));

    TestName(&ExpFarmer);
    TestExp(&ExpFarmer, &Sheep_);


    return 0;
}