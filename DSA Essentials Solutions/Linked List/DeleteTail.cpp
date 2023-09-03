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

node* deleteTail(node * head){
    //Complete this function 
     if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
 
    node * temp = head;
    node *prev = head;  //prev will hold the address of second last node
    while(temp->next!=NULL){
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;	
    delete temp;	//delete the last node
    
    return head;
}

