#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
using mi = map<int, int>;
using ml = map<ll, ll>;
using umi = unordered_map<int, int>;
using uml = unordered_map<ll, ll>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using ti = tuple<int, int, int>;
using tl = tuple<ll, ll, ll>;
using vii = vector<pi>;
using viii = vector<ti>;
using vll = vector<pl>;
using vlll = vector<tl>;
#define mem(dp) memset(dp, -1, sizeof(dp))
#define aut(a, b) for (auto&(a) : (b))
#define out(x, v) for (auto&(x) : (v)) cout << x << " "; cout << '\n';
#define rep(i, n) for (ll (i) = 0; (i) < (n); ++(i) )
#define repp(i, n) for (ll (i) = 1; (i) <= (n); ++(i) )
#define all(v) v.begin(), v.end()
#define fi get<0>
#define se get<1>
#define th get<2>
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pb push_back
int topDown(viii &v, int n, int i, int dp[][4], int prev)
{
    if (i == n) return 0;
    if (dp[i][prev] != -1) return dp[i][prev];

    int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;

    if (prev != 1) op1 = fi(v[i]) + topDown(v, n, i + 1, dp, 1);
    if (prev != 2) op2 = se(v[i]) + topDown(v, n, i + 1, dp, 2);
    if (prev != 3) op3 = th(v[i]) + topDown(v, n, i + 1, dp, 3);

    return dp[i][prev] = max(op1, max(op2, op3));
}
int vacation(vector<int> a, vector<int> b, vector<int> c)
{
    viii v;
    int n = a.size();
    rep(i, n)
    {
        v.pb(mt(a[i], b[i], c[i]));
    }
    int dp[n][4];
    mem(dp);
    return topDown(v, n, 0, dp, 0);
}