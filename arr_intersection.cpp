#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[100] = {1, 4, 1, 5};
    int arr2[100] = {3, 1, 5};
    int size = 4;
    int size2 = 3;

    vector<int> ans;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT_MIN;
                cout << arr1[i] << " ";
            }
            
        }
        
    }
    

    return 0;
}
