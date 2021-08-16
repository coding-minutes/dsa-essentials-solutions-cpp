#include<bits/stdc++.h>
using namespace std;


vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq; //Min-heap
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++; //Counting the number of soldiers in each case
                }
            }
            pq.push(make_pair(count,i));
        }
        vector<int> x;
        while(k>0)
        {
            pair<int,int> temp=pq.top();
            x.push_back(temp.second);
            pq.pop();
            k--;
        }
        return x;
    }

