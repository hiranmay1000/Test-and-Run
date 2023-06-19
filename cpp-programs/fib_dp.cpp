#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter any num: ";
    cin >> n;

    vector<int> dp(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = -1;
    }


    cout << "Ans is: " << fib(n, dp) << endl;

    return 0;
}