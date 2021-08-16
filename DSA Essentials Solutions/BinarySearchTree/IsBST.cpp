#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};

bool isBSTUtil(Node* node, int min, int max)
{
    /* an empty tree is BST */
    if (node==NULL)
        return true;
             
    /* false if this node violates
    the min/max constraint */
    if (node->key < min || node->key > max)
        return false;
     
    /* otherwise check the subtrees recursively,
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->key) &&
        isBSTUtil(node->right, node->key, max); 
}

bool isBST(Node * root){
    //complete this method
    return isBSTUtil(root, INT_MIN,INT_MAX);
    
}
