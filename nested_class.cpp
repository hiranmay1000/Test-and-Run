#include <bits/stdc++.h>

using namespace std;

class Enclosed {
    int a;
public:
    void getVal() {
        cout << "Enter a: ";
        cin >> this->a;
    }

    class Nested {
        int b;
    public:
        void getVal() {
            cout << "Enter b: ";
            cin >> b;
        }

        void show() {
            cout << "b is accessible (inside nested class): " << b << endl;
        }
    };

    void show() {
        cout << "a is accesible (outside nested class): " << a << endl;
    }
};

int main() {
    Enclosed enclosed_Obj;
    Enclosed::Nested nested_Obj;

    enclosed_Obj.getVal();
    nested_Obj.getVal();

    enclosed_Obj.show();
    nested_Obj.show();

    return 0;
}