// Expected Time Complexity : O(1) for each query


#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> v, vector<int> q)
{
    int n = q.size();
    vector<bool> b(n);
    
    bitset<10000> bit;
    bit.reset();
    bit[0] = 1;
  
    for (int i = 0; i < v.size(); ++i)
        bit |= (bit << v[i]);
        
    for(int i=0; i<n; i++)
    {
        int x = q[i];
        bit[x]? b[i]=true : b[i]=false;
    }
    
    return b;
}