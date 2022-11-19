#include <bits/stdc++.h>
using namespace std;

int  main() {
    int a = 5;
    int *ptr = NULL;
    ptr = &a;

    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
}