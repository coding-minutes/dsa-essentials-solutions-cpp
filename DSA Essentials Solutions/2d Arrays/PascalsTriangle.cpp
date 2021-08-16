//Expected Time Complexity: O(n^3)

//Hint: Use Binomial Coeffiecients


#include<bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k);
 
// Function to print first
// n lines of Pascal's
// Triangle
vector<vector<int>> printPascal(int n)
{
    // Iterate through every line and
    // print entries in it
     vector<vector<int>> res;
    for (int line = 0; line < n; line++)
    {
        // Every line has number of
        // integers equal to line
        // number
vector<int> v;
        for (int i = 0; i <= line; i++)
         {v.push_back(binomialCoeff(line, i));}

         res.push_back(v);
    }
return res;
}
 
int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}



