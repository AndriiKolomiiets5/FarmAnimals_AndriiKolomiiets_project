#include "AnimalTest.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void TestName(Animal* a) {
    this_thread::sleep_for(chrono::milliseconds(200));
    cout<<"<--" << a->Name() <<"-->" << endl;
}

void TestAnimalName(Animal* a) {
    cout << "It  is a " << a->AnimalName() << endl;
}

void TestBreed(Animal* a) {
    cout <<"It's breed is " << a->Breed() << endl;
    
}void TestSize(Animal* a) {

    cout <<"It's size:" << a->Size() << endl;

}



void TestAnimal(Animal* a) {
    TestName(a);
   TestAnimalName(a);
    this_thread::sleep_for(chrono::milliseconds(200));
    cout <<endl;
    this_thread::sleep_for(chrono::milliseconds(200));
    TestBreed(a);
    this_thread::sleep_for(chrono::milliseconds(200));
    TestSize(a);
    
}