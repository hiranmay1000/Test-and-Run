#include <bits/stdc++.h>

using namespace std;

class Car {
public:
    virtual void sound() {
        cout << "Car: Broom Broom" << endl;
    }

    void showPower() {
        cout << "Car:  Torque in NM" << endl;
    }
};

class BMW: public Car {
public:
    void sound() {
        cout << "BMW: Hurgg Hurgg" << endl;
    }

    void showPower() {
        cout << "BMW: 120 NM torque" << endl;
    }
};

class Mercedes: public Car {
public:
    void sound() {
        cout << "Mercedes: Hmmwe Hmmwe" << endl;
    }

    void showPower() {
        cout << "Mercedes: 120 NM torque" << endl;
    }
};

int main() {
    Car allCar;
    Car* car_ptr;
    Mercedes cars;
    car_ptr = &cars;

    car_ptr->sound(); // pointing to the derived class
    car_ptr->showPower();

    allCar.sound(); // pointing to the base class
    allCar.showPower();

    return 0;
}