#include <bits/stdc++.h>

using namespace std;

class Car {
public:
    virtual void sound() {
        cout << "Broom Broom" << endl;
    }

    void showPower() {
        cout << "Torque in NM" << endl;
    }
};

class BMW: public Car {
public:
    void sound() {
        cout << "Hurgg Hurgg" << endl;
    }

    void showPower() {
        cout << "120 NM torque" << endl;
    }
};

class Mercedes: public Car {
public:
    void sound() {
        cout << "Hmmwe Hmmwe" << endl;
    }

    void showPower() {
        cout << "120 NM torque" << endl;
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