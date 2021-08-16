// Expected Time Complexity : O(Log n)


#include<bits/stdc++.h>
using namespace std;

long long convertDecimalToBinary(unsigned long long int n)
{
    long long binaryNumber = 0;
    unsigned long long int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int earthLevel(int k)
{
    //your code goes here
    unsigned long long int binaryNumber, sum = 0;
    binaryNumber = convertDecimalToBinary(k);
    
    while (binaryNumber != 0)
    {
        unsigned long long int t;
        t = binaryNumber%2;
        sum = sum + t;
        binaryNumber = binaryNumber/10;
    }
    
    return sum;
}