#include <bits/stdc++.h>
using namespace std;

class A{ // A
    public:
        A(){
            cout << "Base class A called!" << endl;
        }
        ~A(){
            cout << "A's Destructor called!" << endl;
        }
};

class B: public A{ // B -> A
    public:
        B(){
            cout << "Derived class B called!" << endl;
        }
        ~B(){
            cout << "B's Destructor called!" << endl;
        }
};

class C: public B{ // C -> B -> A
    public:
        C(){
            cout << "Derived class C called!" << endl;
        }
        ~C(){
            cout << "C's    Destructor called!" << endl;
        }
};

int main(){
    C _c;
    return 0;
}