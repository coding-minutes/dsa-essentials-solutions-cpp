#include<bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& v) {
            
           pair<int, int> f={v[0][0],v[0][1]};
           pair<int, int> s={v[1][0],v[1][1]};
        
        if(f.first==s.first){
            return f.first;
        }
        else if(f. first==s.second){
            return f.first;
        }
        else if(f.second==s.first){
            return f.second;
        }
        else{
            return f.second;
        }
        
        
        
        
    }
