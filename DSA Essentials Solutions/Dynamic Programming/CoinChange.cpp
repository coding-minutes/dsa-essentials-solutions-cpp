#include<bits/stdc++.h>
using namespace std;

long long coinChange(int s, int n , vector<int> a, long long dp[500][100])
{
    if (n < 0 || s < 0) return 0;
    if (s == 0) return 1;

    if (dp[s][n] != 0) return dp[s][n];
    
    long long op1 = coinChange(s, n - 1, a, dp);
    long long op2 = coinChange(s - a[n], n, a, dp);

    return dp[s][n] = op1 + op2;
}

long long findCombinations(int n, vector<int> coins)
{
    long long dp[500][100] = {{0}};
    return coinChange(n, coins.size()-1, coins, dp);
}