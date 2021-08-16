Expected Time Complexity : O(N)


#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    string out;
    for(auto x : S){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') out.push_back(x);
    }
    return out;
} 