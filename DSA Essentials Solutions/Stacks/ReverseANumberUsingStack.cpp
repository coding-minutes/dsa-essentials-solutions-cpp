//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    
    int number = n;
    stack <int> st;
    while (number != 0) 
    {
        st.push(number % 10);
        number = number / 10;
    }
    
    int rev = 0;
    int i = 1;
      
    while (!st.empty()) 
    {
        rev = rev + (st.top() * i);
        st.pop();
        i = i * 10;
    }
      
    return rev;
	
}