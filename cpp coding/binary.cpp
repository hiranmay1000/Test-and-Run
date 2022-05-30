#include <iostream>
using namespace std;

int main()
{
    int a[6] = {2, 8, 4, 5, 1, 3};
    int n = 6;
    int start = 0;
    int end = n - 1;

    for (size_t i = 0; i < n; i++)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}