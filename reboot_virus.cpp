#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "1. Run\n0. Exit!" << endl;
    cin >> x;

    (x == 1) ? system("reboot") :  0;

    return 0;
}