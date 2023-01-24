#include <bits/stdc++.h>
using namespace std;

class Region {
    float latitude;
    float longitude;
public:
    void getdata() {
        cout << "Enter latitude:  ";
        cin >> this->latitude;
        cout << "Enter longitude:  ";
        cin >> this->longitude;
    }

    void print() {
        cout << "Difference is: \nLatitude: " << latitude << "\nLongitude: " << longitude << endl;
    }

    Region operator - (const Region r1) {
        Region temp;
        temp.latitude = this->latitude - r1.latitude;
        temp.longitude = this->longitude - r1.longitude;
        return temp;
    }
};

int main()
{
    Region _r1, _r2;
    cout << "First region: \n";
    _r1.getdata();
    cout << "Second region: \n";
    _r2.getdata();

    Region _difference = _r1 - _r2;
    _difference.print();
}