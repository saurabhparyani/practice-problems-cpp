// WAF that takes in the head of an integer
// linked list and returns the number
// of elements in it

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

int LLelements_count_24(Node* head){
	int c=0;
	Node* temp = head;
	while(temp != NULL){
		c++;
		temp = temp->next;
	}
	return c;
}

int main(){
	Node* head = new Node(3);
	head->next = new Node(5);
	head->next->next = new Node(6);
	head->next->next->next = new Node(3);
	head->next->next->next->next = new Node(-1);
	
	cout<<LLelements_count_24(head);
}

