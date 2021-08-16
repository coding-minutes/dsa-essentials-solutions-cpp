//Expected Time Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> A) {
    
     int largestEle = INT_MIN;
     
     for (auto element : A ) {
         largestEle = max(largestEle, element);
     }
     
     return largestEle;
}