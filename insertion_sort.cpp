#include <iostream>
using namespace std;

//  5, 1, 3, 2, 4 
//  1, 5, 3, 2, 4

void insertionSort(int* a, int n) {
    for (int i = 1; i < n; i++)
    {
        int piv = a[i];
        int j = i - 1;
        while (j >= 0) {
            if (piv < a[j]) {
                a[j + 1] = a[j];
                j--;
            }
            else {
                break;
            }
        }
        a[j + 1] = piv;
    }
}

void printAns(int* a, int n) {
    cout << "After sorting: " << endl;
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

    insertionSort(a, 5);
    printAns(a, 5);

    cout << endl;
}