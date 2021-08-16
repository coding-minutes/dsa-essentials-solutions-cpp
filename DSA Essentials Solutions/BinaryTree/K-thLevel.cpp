//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    // Create Queue
    queue<struct Node*> que;
 
    // Enqueue the root node
    que.push(root);
 
    // Create a set
    vector<int> s;
 
    // Level to track
    // the current level
    int level = 0;
    int flag = 0;
 
    // Iterate the queue till its not empty
    while (!que.empty()) {
 
        // Calculate the number of nodes
        // in the current level
        int size = que.size();
 
        // Process each node of the current
        // level and enqueue their left
        // and right child to the queue
        while (size--) {
            struct Node* ptr = que.front();
            que.pop();
 
            // If the current level matches the
            // required level then add into set
            if (level == k) {
 
                // Flag initialized to 1
                flag = 1;
 
                // Inserting node data in set
                s.push_back(ptr->key);
            }
            else {
 
                // Traverse to the left child
                if (ptr->left)
                    que.push(ptr->left);
 
                // Traverse to the right child
                if (ptr->right)
                    que.push(ptr->right);
            }
        }
 
        // Increment the variable level
        // by 1 for each level
        level++;
 
        // Break out from the loop
        // if the Kth Level is reached
        if (flag == 1)
            break;
    }
    return s;
}