#include <bits/stdc++.h>
using namespace std;

class solution {

public:
    int maximizeSum(int a[], int n)
    {
        int sum = 0;

        for (int i = 0; i < n; i++) {

            int x = a[n - 1 - i];

            

        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
            sum += a[i];
        }
        cout << endl;

        return sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        solution ob;

        cout << "Answer: " << endl;
        cout << ob.maximizeSum(arr, n) << endl;
    }

}