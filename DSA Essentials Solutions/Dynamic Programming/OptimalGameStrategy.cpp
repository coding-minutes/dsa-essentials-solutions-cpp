#include <bits/stdc++.h>
using namespace std;

int game(int n, vector<int> v, int s, int e){

    if(s==e || s==e-1){
        return max(v[s],v[e]);
    }

    int op1=v[s] + min(game(n,v,s+2,e),game(n,v,s+1,e-1));
    int op2=v[e] + min(game(n,v,s+1,e-1),game(n,v,s,e-2));
    return max(op1,op2); 
}

int MaxValue(int n, vector<int> v){
    int res=game(n,v,0,n-1);
    return res;
}