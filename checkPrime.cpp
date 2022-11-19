#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrime(int n) {
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i)) {
            cout << i << " ";   
        }
    }

}

int main()
{
    int n;
    cin >> n;

    printPrime(n);
    cout << endl;
    return 0;
}