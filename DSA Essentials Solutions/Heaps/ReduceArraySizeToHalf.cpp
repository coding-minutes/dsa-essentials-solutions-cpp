
#include<bits/stdc++.h>
using namespace std;

int minSetSize(vector<int>& arr) {
        int n=arr.size();
        priority_queue<int> q;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto pair:mp){
            q.push(pair.second);
        }
        int sum=0;
        int cnt=0;
        while(n-sum>n/2){
            sum+=q.top();
            q.pop();
            cnt++;
            
        }
        return cnt;
    }

