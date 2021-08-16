#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int sumBT(Node* root)
{
    // Code here
    int res = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        res += f->key;
    }
    return res;
}