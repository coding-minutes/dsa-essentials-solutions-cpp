

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> arr){
    int n = arr.size();
    vector<int> arr1(n, 0);
    stack<int> s;
 
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
 
        if (s.empty())
            arr1[i] = -1;        
        else
            arr1[i] = s.top();       
 
        s.push(arr[i]);
    }
        
    return arr1;
}
    
