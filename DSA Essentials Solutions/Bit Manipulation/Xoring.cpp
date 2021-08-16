// Expected Time Complexity : O(N)
// xor of two same elements is 0

#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    int res=0;
    for(auto x : v)  res ^= x;
    return res;
}