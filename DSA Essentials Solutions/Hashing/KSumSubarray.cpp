#include<bits/stdc++.h>
using namespace std;


int longestSubarrayKSum(vector<int> arr,int k){
    int n = arr.size();
	unordered_map<int,int> m;
	int pre = 0;

	int len = 0;

	for(int i=0;i<n;i++){
		pre += arr[i];

		if(pre==k){
			len = max(len,i+1);
		}

		if(m.find(pre-k)!=m.end()){
			len = max(len,i - m[pre-k]);
		}
		else{
			//store the first occ
			m[pre] = i;
		}

	}
	return len;

}
