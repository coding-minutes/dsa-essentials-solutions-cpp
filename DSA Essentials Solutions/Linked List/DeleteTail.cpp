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
 
    // Find the second last node
    node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
 
    // Delete last node
    delete (second_last->next);
 
    // Change next of second last
    second_last->next = NULL;
 
    return head;
}

