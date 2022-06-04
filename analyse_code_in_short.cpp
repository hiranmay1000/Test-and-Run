#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2, 1, 4, 3};
    // int size = sizeof(arr) / sizeof(arr[0]);
    arr[4] = 6;
    size++;

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}