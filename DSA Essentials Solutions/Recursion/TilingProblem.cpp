//Expected Time Complexity: O(2^n)

#include <iostream>
using namespace std;

int tiles(int n,int m){
    if(n<m) return 1;
	int op1 = tiles(n-1, m);
	int op2 = tiles(n-m, m);
	return (op1 + op2);
}

int tillingProblem(int n, int m){
    return tiles(n, m);
}

