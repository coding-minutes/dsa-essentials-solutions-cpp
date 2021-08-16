#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
bool isSymmetric(Node* root) {
        queue<Node*> q1;
        queue<Node*> q2;
        if(root == NULL || (root->right==NULL && root->left==NULL)) return true;
        if(root->right == NULL || root->left == NULL) return false;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty())
        {
            Node* f1 = q1.front();
            q1.pop();
            Node* f2 = q2.front();
            q2.pop();
            if(q1.empty() && !q2.empty()) return false;
            if(!q1.empty() && q2.empty()) return false;
            if(f1->left==NULL && f2->right!=NULL) return false;
            if(f1->left!=NULL && f2->right==NULL) return false;
            if(f1->key != f2->key) return false;
            if(f1->left) q1.push(f1->left);
            if(f1->right) q1.push(f1->right);
            if(f2->right) q2.push(f2->right);
            if(f2->left) q2.push(f2->left);
        }
        if(q1.empty() && q2.empty()) return true;
        return false;
    }