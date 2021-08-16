#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int minDepth(Node *root) {
        // Your code here
        int res = INT_MAX;
        queue<pair<Node*, int>> q;
        int d = 1;
        q.push({root, d});
        while(!q.empty())
        {
            Node* f = q.front().first;
            d = 1+q.front().second;
            if(f->left == NULL && f->right == NULL) 
                res = min(res, q.front().second);
            q.pop();
            if(f->left) q.push({f->left, d});
            if(f->right) q.push({f->right, d});
        }
        return res;
    }