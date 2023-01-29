#include <bits/stdc++.h>
using namespace std;

class Prime {
public:
    int a, k, i, count = 0;
    Prime(int x) {
        this->a = x;

        k = 1;
        {
            for (i = 2; i <= a / 2; i++)
            {
                if (a % i == 0) {
                    k = 0;
                    break;
                }
            }
        }
    }

    void show() {
        if (k == 1) {
            cout << a << " is a prime number." << endl;
        }
        else {
            cout << a << " is NOT a prime number." << endl;
        }
    }
};

int main()
{
    Prime n(337);
    n.show();

    return 0;
}