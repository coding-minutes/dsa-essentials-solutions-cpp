//Expected Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

void help(int i, int n, vector<int> &v)
{
    if(i > n) return;
    v.push_back(i);
    help(i+1, n, v);
}

vector<int> increasingNumbers(int N) {
    vector<int> v;
    help(1, N, v);
    return v;
}