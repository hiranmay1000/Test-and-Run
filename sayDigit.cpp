#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n) {
    // base case 
    if (n == 0) {
        return;
    }
    string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int num = n % 10;
    n = n / 10;
    sayDigit(n);
    cout << arr[num] << " ";

    return;
}

int main()
{//423
    int n;
    cin >> n;
    sayDigit(n);
}