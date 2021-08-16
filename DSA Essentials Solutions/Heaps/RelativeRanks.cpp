 #include<bits/stdc++.h>
using namespace std;
   vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }
       
    int n= score.size();
    
    vector<string> vec(n);
   
    
    int cnt=0;
    
    
    while(!pq.empty()){
        cnt++;
        
        if(cnt==1){
            cout<<"hey"<<endl;
            vec[pq.top().second].append("Gold Medal");
        }
        else if(cnt==2){
            vec[pq.top().second].append("Silver Medal");
        }
        else if(cnt==3){
            vec[pq.top().second].append("Bronze Medal");
        }
        else {
            vec[pq.top().second].append(to_string(cnt));
        }
        pq.pop();
    }
    return vec;
    }


