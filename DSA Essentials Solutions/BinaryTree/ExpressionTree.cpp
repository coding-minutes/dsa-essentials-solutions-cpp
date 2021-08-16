//Expected Time Complexity: O(n)
  

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    string key;
    Node* left, *right;
};

bool isOp(string data)
{
    if(data == "+" or data == "-" or data == "*" or data == "/")
        return true;
    return false;
}

int evalTree(Node* root){
    if(root == NULL) return 0;
    if(!isOp(root->key)) return stoi(root->key);
    
    if(root->key == "+") return evalTree(root->left)+evalTree(root->right);
    if(root->key == "-") return evalTree(root->left)-evalTree(root->right);
    if(root->key == "*") return evalTree(root->left)*evalTree(root->right);
    if(root->key == "/") return evalTree(root->left)/evalTree(root->right);
}