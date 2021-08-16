#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    vector<int> r,c;
    int n = arr.size(), m = arr[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                r.push_back(i); c.push_back(j);
            }
        }
    }
    
    for(auto x : r){
        for(int i=0; i<n; i++){
            arr[x][i] = 0;
        }
    }
    for(auto x : c){
        for(int i=0; i<n; i++){
            arr[i][x] = 0;
        }
    }
    
    return arr;
}