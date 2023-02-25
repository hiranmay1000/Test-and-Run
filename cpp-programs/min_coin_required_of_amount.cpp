#include<bits/stdc++.h>
using namespace std;

int minCoins(int amt, vector<int>& coins, vector<int>& dp) {
    if (amt == 0) return 0;

    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        if (amt >= coins[i]) {

            int currCoins = 0;
            if (dp[amt - coins[i]] != 0) {
                currCoins = dp[amt - coins[i]];
            }
            else {
                currCoins = minCoins(amt - coins[i], coins, dp);
            }

            if (currCoins != INT_MAX and currCoins + 1 < ans) {
                ans = currCoins + 1;
            }
        }
    }
    return dp[amt] = ans;
}

int main()
{
    int amount = 18;
    vector<int> coins = { 7, 5, 1 };
    vector<int> dp(amount, 0);
    dp[0] = 0;

    cout << "Total Coins Required: " << minCoins(amount, coins, dp) << endl;

    cout << "Coins: ";
    for (auto it : dp) {
        cout << it << ' ';
    }

    return 0;
}