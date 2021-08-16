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

void mirror(Node* node)
{
    if (node == NULL)
        return;
    else
    {
        struct Node* temp;
         
        /* do the subtrees */
        mirror(node->left);
        mirror(node->right);
     
        /* swap the pointers in this node */
        temp     = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

Node* mirrorBST(Node * root){
    //complete this method
    mirror(root);
    return root;
    
}
