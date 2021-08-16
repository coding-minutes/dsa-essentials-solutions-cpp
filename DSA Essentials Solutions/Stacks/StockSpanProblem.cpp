//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpanner(vector<int> &a){
	stack <int> s;
	int n = a.size();
	s.push(0);
	vector<int> arr(n, 1);
	for (int i = 1; i < n; i++) {
		while (!s.empty() and a[s.top()] <= a[i]) {
			s.pop();
		}
		if (!s.empty()) {
			arr[i] = i - s.top();
		} else arr[i] = i + 1;
		s.push(i);
	}
	return arr;
}