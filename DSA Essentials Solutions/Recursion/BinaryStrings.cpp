//Expected Time Complexity: O(2^n)

#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void helper(string str,int n,int i){
    if(i==n){
        v.push_back(str);
        return;
    }
    string s1= str;
    s1.push_back('0');
    helper(s1,n,i+1);

    if(i>0 && str[i-1]=='0'){
       str.push_back('1');
       helper(str,n,i+1);
    }
    else if(i==0){
        str.push_back('1');
        helper(str,n,i+1);
    }

    return;
}

vector<string> binaryStrings(int n){
     v.clear();
     string str;
     helper(str,n,0);
     return v;

}