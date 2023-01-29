#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    virtual void properties() = 0; // pure virtual function

    // virtual void properties() { // virtual function
    //     cout << "This is Car" << endl; // it has instances inside function 
    //     cout << "I am in base class" << endl;
    // }
};

class Car1: public Car {
public:
    void properties() {
        cout << "This is Mercedes" << endl;
    }
};

class Car2: public Car {
public:
    void properties() {
        cout << "This is BMW" << endl;
    }
};

int main()
{
    Car* base_ptr; // created a pointer for derived class

    Car1 first_car; // create an object for Car1 class 
    base_ptr = &first_car; // pointing address of Car1 derived class to base class
    base_ptr->properties(); // print the properties

    Car2 second_car; // create an object for Car2 class
    base_ptr = &second_car; // pointing address of Car2 derived class to base class
    base_ptr->properties(); // print the properties
}