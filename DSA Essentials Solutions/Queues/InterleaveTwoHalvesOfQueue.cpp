//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

queue<int> interLeave(queue<int> q){
    int n=q.size();
	queue<int> q1, q2; 
	for (int i=0;i<(n/2);i++) { 
		q1.push(q.front()); 
		q.pop(); //Expected Time Complexity: O(2^n)


	} 
	for (int i=0;i<(n/2);i++) { 
		q2.push(q.front()); 
		q.pop(); 
	} 

	for (int i=0;i<(n/2);i++) { 
		q.push(q1.front()); 
		q1.pop(); 
		q.push(q2.front()); 
		q2.pop(); 
	} 
    return q;
}