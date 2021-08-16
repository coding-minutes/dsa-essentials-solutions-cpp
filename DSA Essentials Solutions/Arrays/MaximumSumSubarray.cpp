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