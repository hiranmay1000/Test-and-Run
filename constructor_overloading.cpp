#include <bits/stdc++.h>
using namespace std;

class Area {
public:
    int len, bred, rad;
    double ans = 0;

    Area(int len, int bred) {
        ans = len * bred;
    }

    Area(int rad) {
        ans = pow(M_PI * rad, 2);
    }

    void disp() {
        cout << "Area: " << ans << endl;
    }
};

int main()
{
    Area rec(4, 5), circ(5);

    rec.disp();
    circ.disp();

    return 0;
}