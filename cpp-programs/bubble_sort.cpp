#include <iostream>
using namespace std;

//  5, 1, 3, 2, 4 
//  1, 5, 3, 2, 4

void bubbleSort(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j >= 0; j--)
        {
            if (a[n - 1 - i] < a[j]) {
                swap(a[n - 1 - i], a[j]);
            }
        }
    }

}

void printAns(int* a, int n) {
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSort(a, n);
    printAns(a, n);

    cout << endl;
}