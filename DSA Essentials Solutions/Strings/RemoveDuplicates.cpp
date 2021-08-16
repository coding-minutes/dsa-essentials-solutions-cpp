Expected Time Complexity : O(N)


#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here
    set<char> ss(s.begin(), s.end());
    string str;
 
    for (auto x : ss)
       str.push_back(x);
 
    return str;
}