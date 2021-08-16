#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int, int> b){
    float x = sqrt((a.first*a.first) + (a.second*a.second));
    float y = sqrt((b.first*b.first) + (b.second*b.second));
    return x < y;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(), v.end(), comp);
    return v;
}