#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    // your code  goes here
    int i, j, n=arr.size();
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
   
   return arr;
}