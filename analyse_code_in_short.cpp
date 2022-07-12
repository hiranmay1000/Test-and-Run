#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 6> arr = {2, 1, 4, 3};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}