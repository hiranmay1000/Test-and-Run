
def minCoins(amt, coins, dp):
    if(amt == 0): 
        return 0

    totalMinCoin = 2147483647   

    for change in coins:
        if(amt - change >= 0):
            currCoins = 0
            if(dp[amt - change] != 0):
                currCoins = dp[amt - change]
            else:
                currCoins = minCoins(amt, coins, dp)

            if(currCoins != 2147483647 and (currCoins + 1) < totalMinCoin):
                totalMinCoin = currCoins + 1


    dp[amt] = totalMinCoins
    return dp[amt]





amount = 18
coins = [7,5,1]
dp = [0] * (amount + 1)
dp[0] = 0

totalMinCoins = minCoins(amount, coins, dp)
print (f"Min coins required: {totalMinCoins}")

for coin in dp:
    print(coin)

