    #include <bits/stdc++.h>
    #include <conio.h>
    using namespace std;

    template <typename Q>

    void sort_(Q arr[], int n) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n;j++)
            {
                if (arr[i] < arr[j]) {
                    Q temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }

        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int main()
    {
        int n;
        cout << "Enter size: ";
        cin >> n;
        double a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort_<double>(a, n);
    }