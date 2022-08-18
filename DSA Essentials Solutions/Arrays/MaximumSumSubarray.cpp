//Expected Time Complexity: O(N)
//Hint: Kadane's Algorithm


#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    

    bool f =true;
    int rr=INT_MIN;
    for(auto x : A){
        if(x >0 ) f = false;
        if(x > rr) rr = x;
    }
    if(f) return rr;
    
    int maxSumFromPrevIndexToLeft = 0;
    
    int finalAnswer = 0;
    
    int temporary  = 0;
    
    int arraySize = A.size();
    for (int i = 0; i < arraySize; i++) {
        temporary = maxSumFromPrevIndexToLeft + A[i];
        if (temporary < A[i]) {
            maxSumFromPrevIndexToLeft = A[i];
        }
        else {
            maxSumFromPrevIndexToLeft = temporary;
        }
        finalAnswer = max(finalAnswer, maxSumFromPrevIndexToLeft);
    }
    
    return finalAnswer;
    
}

// 2nd approach -simple
int maxSubArray(vector<int>& nums) {
        // use kadane algo. 
        // int globalMaxSum = nums[0], currMaxSum = nums[0];
        // for (int ind = 1; ind < nums.size(); ind++) {
        //     currMaxSum = max(currMaxSum + nums[ind], nums[ind]);
        //     globalMaxSum = max(globalMaxSum, currMaxSum);
        // }
        // return globalMaxSum;  
        
    int larg=nums[0],curr=nums[0];
    for(int i=1;i<nums.size();i++){
    if(curr<0){
        curr=0;
    }
    curr=curr+nums[i];
    larg=max(larg,curr);
    }
        return larg;
}
