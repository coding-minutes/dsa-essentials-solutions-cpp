#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return a > b;
}
vector<int> sortingWithComparator(vector<int> v, bool flag){
    // your code  goes here
    if(flag) sort(v.begin(), v.end());
    else sort(v.begin(), v.end(), compare);
    return v;
}