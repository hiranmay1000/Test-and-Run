#include <iostream>
using namespace std;

//Function overloading 
int func1(int x, int y)
{
    return x + y;
}

double func1(double x, double y)
{
    return x + y;
}

int main()
{
    int mynum1 = func1(3, 4);
    double mynum2 = func1(3.2, 4.2);

    cout << "Integer value: " << mynum1 << endl;
    cout << "Double value: " << mynum2 << endl;
}