#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int val;
    Node* left, *right;
};

vector<vector<int>> vv;
void help(Node* root, int a, vector<int> &v, int b)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        
        if(a == b+root->val) 
        {
            v.push_back(root->val);
            vv.push_back(v);
            v.pop_back();
        }
        return;
    }
    if(root->left)
    {
        v.push_back(root->val);
        help(root->left, a, v, b+root->val);
        v.pop_back();
    }
    if(root->right)
    {
        v.push_back(root->val);
        help(root->right, a, v, b+root->val);
        v.pop_back();
    }
}
vector<vector<int>> pathSum(Node* root, int targetSum) {
    vv.clear();
    vector<int> v;
    help(root, targetSum, v, 0);
    return vv;
}