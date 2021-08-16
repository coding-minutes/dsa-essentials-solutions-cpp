#include<bits/stdc++.h>
using namespace std;


int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        for(int i=0; i<nums.size(); i++){
            q.push((nums[i]-1));
        }
        
        int p=q.top();
        q.pop();
        return p*q.top();
    }



