// WAF to insert a new node to the tail
// of a given integer linked list.
// Value of that node needs to be 1+max
// where max is max of all values in LL

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int x){
			data = x;
			next = NULL;
		}
};

void LL_insert_maxplusone_node_25(Node* head){
	int max = head->data;
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
		if(temp->data > max)
			max = temp->data;
	}
	Node* maxNode = new Node(max+1);
	temp->next = maxNode;
}


int main(){
	Node* head = new Node(5);
	head->next = new Node(0);
	head->next->next = new Node(-3);
	head->next->next->next = new Node(7);
	head->next->next->next->next = new Node(2);
	
	LL_insert_maxplusone_node_25(head);
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}