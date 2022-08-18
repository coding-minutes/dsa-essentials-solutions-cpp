#include <bits/stdc++.h>
using namespace std;

void permutation(string &str, vector<string> &result, int itr, int size)
{
    // base case
    if (itr == size)
    {
        // storing result 
        result.push_back(str);
        return;
    }

    for (int i = itr; i < size; i++)
    {
        // work
        swap(str[i], str[itr]);

        // recursive call
        permutation(str, result, itr + 1, size);

        // backtracking
        swap(str[i], str[itr]);
    }
}