#include <bits/stdc++.h>

using namespace std;

class A {
public:
    A() {
        cout << "Class 'A' called and accessed from child class 'D'." << endl;
    }
};

class B: public virtual A {}; // Base class declared virtual
class C: public virtual A {}; // Base class declared virtual
class D: public B, public C {};

int main()
{
    A* obj_A_Ptr;
    D obj_d;
    obj_A_Ptr = &obj_d;

    obj_A_Ptr;
}