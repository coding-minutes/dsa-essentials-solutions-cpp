#include<bits/stdc++.h>
using namespace std;

bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,bool> map;
        int n=rooms.size();
        for(int i=0;i<n;i++){
            map[i]=false;
        }
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int k=q.size();
            while(k--){
                int a=q.front();
                q.pop();
                map[a]=true;
                for(int j=0;j<rooms[a].size() && rooms[a].size()!=0;j++){
                    if(map[rooms[a][j]]==false){
                        q.push(rooms[a][j]);    
                    }     
                }
            }
        }
        for(auto i:map){
            if(i.second==false){
                return false;
            }
        }
        return true;
    }