//Time complexity: O(n)
//Hint: Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std ;

int maxSumSubarray(vector<int> A) {
    int n = A.size(), max_sum = *min_element(A.begin(), A.end()), curr_sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(curr_sum + A[i] <= 0){
            curr_sum = A[i];
        }else{
            curr_sum += A[i];
        }
        
        max_sum = max(max_sum, curr_sum);
    }
    
    return max_sum;
}
