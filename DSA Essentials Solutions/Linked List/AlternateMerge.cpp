//Expected Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* apend(node* root, int d){
    if(root == NULL) return new node(d);
    node* temp = root;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new node(d);
    return root;
}

node* alternateMerge(node * root1, node* root2){
    //Complete this function 
    node* root = NULL;
    if(!root1) return root2;
    if(!root2) return root1;
    while(root1 && root2){
        root = apend(root, root1->data);
        root = apend(root, root2->data);
        root1 = root1->next;
        root2 = root2->next;
    }
    if(root1){
        while(root1){
            root = apend(root, root1->data);
            root1 = root1->next;
        }
    }
    if(root2){
        while(root2){
            root = apend(root, root2->data);
            root2 = root2->next;
        }
    }
    
    return root;
}
