#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }


    for (int i = 0; i < n * 2; i++)
        cout << " ";
    cout << "fact(" << n << ")" << endl;

    if (n != 1) {
        for (int i = 0; i < (n * 2) + 2; i++)
            cout << " ";

        cout << "/" << endl;
    }

    return n * fact(n - 1);
}

int main()
{
    cout << "Factorial of: ";
    int n;
    cin >> n;
    cout << "\nFactorial of [" << n << "] is-> " << fact(n) << endl;
    cout << "---------------------------THE END-----------------------------";

}