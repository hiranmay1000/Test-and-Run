#include <bits/stdc++.h>
using namespace std;

class Car {
    string name = "BMW";
public:
    // virtual void getdata() = 0; // no function definition, with pure virtual function we cannot create object of the base class
    virtual void getdata() { // with function definition
        cout << "Name: " << name << endl;
    }
};

class Model: public Car {
    string model = "X6";
public:
    virtual void getdata() = 0;
    // void getdata() {
    //     cout << "Model: " << model << endl;
    // }
};

class Price: public Car {
    float price = 5000;
public:
    void getdata() {
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Car* _car;
    Model* _modptr;
    _car = _modptr;

    _car->getdata();
}