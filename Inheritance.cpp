#include <iostream>

using namespace std;

class Vehicle {
    public:
        void honk() { cout << "tuut! tuut!" << endl; }
};

class Car : public Vehicle {
    public:
        string model = "Mercedes GLE 350d";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << "Model: " << myCar.model << endl;
}