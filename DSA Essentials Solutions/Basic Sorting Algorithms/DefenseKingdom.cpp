//Expected Time Complexity= O(N log N)
//Find the largest distance from both W and H axis and take their product.



#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(), v.end()
int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<pair<int, int>> v = position;
    int w = W, h = H;
    vector<ll> x, y;
    x.push_back(0); y.push_back(0);
    
    ll maxx = INT_MIN, maxy = INT_MIN;

    for(int i=0; i<v.size(); i++)
    {
        x.push_back(v[i].first), y.push_back(v[i].second);
    }
    // x.push_back(W); y.push_back(H);
    sort(all(x));
    sort(all(y));

    for (ll i = 1; i < x.size(); i++) maxx = max(maxx, x[i] - x[i - 1] - 1);
    for (ll i = 1; i < y.size(); i++) maxy = max(maxy, y[i] - y[i - 1] - 1);
    maxx = max(maxx, W - x[x.size() - 1] );
    maxy = max(maxy, H- y[y.size() - 1]);

    return (maxx * maxy);
    
}