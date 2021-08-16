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

int kthLastElement(node * head,int k){
    //Complete this function to return kth last element
    node * fast = head;
    node * slow = head;
    
    int cnt = 0;
    while(cnt < k){
        fast = fast->next;
        cnt++;
    }
    
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow->data;
}