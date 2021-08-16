
//Expected Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    
    stack<char> Stack;
  
    for (char ch : str)
    {
        if (ch == ')')
        {
            char top = Stack.top();
            Stack.pop();
  
            int elementsInside = 0;
            while (top != '(')
            {
                elementsInside++;
                top = Stack.top();
                Stack.pop();
            }
            if(elementsInside < 1) {
                return true;
            }
        }
  
        else
            Stack.push(ch);
    }
  
    return false;
    
}
