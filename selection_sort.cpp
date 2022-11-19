#include <iostream>
using namespace std;

void selectSort(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i]) {
                swap(a[j], a[i]);
            }
        }

    }

}


void printAns(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

}

int main()
{
    int a[5] = { 5, 1, 3, 2, 4 };

    selectSort(a, 5);
    printAns(a, 5);

    cout << endl;
}