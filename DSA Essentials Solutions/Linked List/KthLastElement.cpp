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
    int count{1};
    node *i = head;
    node *j = head;
    
    while (j->next!=NULL){
      if(count>=k){
        i = i->next;
      }
      j = j->next;
      count++;
}
	
    return i->data;

}
