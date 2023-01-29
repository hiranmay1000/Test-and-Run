#include<iostream>
using namespace std;

int area(int w, int h = 2){
    return w * h;
}

int main()
{
    cout << area(2);
    return 0;
}