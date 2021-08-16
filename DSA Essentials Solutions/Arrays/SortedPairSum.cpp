//Expected Time Complexity: O(N)
//Hint: Two Pointer Approach

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int res_l, res_r;  
    int n = arr.size();
    int l = 0, r = n-1, diff = INT_MAX;
 
    while (r > l)
    {
       if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }
 
       if (arr[l] + arr[r] > x)
           r--;
       else 
           l++;
    }
    
    return {arr[res_l], arr[res_r]};
}