#include <bits/stdc++.h>

using namespace std;

inline void multiply(int a, int b){
    cout << "Product: " << a*b << endl;
}

int main()
{
    multiply(2,6); // it replicates the function body. hence save memory and time
    multiply(3,5); // it copies the method of function definition and execute during function call  
}
