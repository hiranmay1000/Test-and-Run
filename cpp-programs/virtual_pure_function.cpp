#include <bits/stdc++.h>

using namespace std;

class Animal {
public:
    virtual void move() = 0; // pure virtual function
};

class Lion: public Animal {
public:
    void move() {
        cout << "Lion moves in unusual manner" << endl;
    }
};

class Dog: public Animal {
public:
    void move() {
        cout << "Dog moves in a funky way" << endl;
    }
};

class Puppy: public Animal {
public:

};

int main() {
    Animal* animal_ptr_lion, * animal_ptr_dog;
    Lion l;
    Dog d;

    animal_ptr_lion = &l;
    animal_ptr_dog = &d;

    animal_ptr_lion->move();
    animal_ptr_dog->move();

    return 0;
}