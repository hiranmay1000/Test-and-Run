#include <bits/stdc++.h>

using namespace std;

class Size {
    int bredth;
    int height;
public:
    int length;

    void set_data() {
        cin >> this->length >> this->bredth >> this->height;
    }

    friend void show(Size); // friend function
};

void show(Size s) {
    cout << "Size of the box is: " << s.length * s.bredth * s.height << endl;
}

int main()
{
    Size s1;
    s1.set_data();
    show(s1);
}