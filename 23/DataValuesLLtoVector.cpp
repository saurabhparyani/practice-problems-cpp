// WAF that takes in a head Node of
// an integer linked list and returns the data values
// in the form of a 1-D vector

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

vector<int>LLvalues_to_vector_23(Node* head){
	vector<int> v;
	Node* temp = head;
	while(temp != NULL){
		v.push_back(temp->data);
		temp = temp->next;
	}
	return v;
}

int main(){
	Node* head = new Node(3);
	head->next = new Node(5);
	head->next->next = new Node(6);
	head->next->next->next = new Node(3);
	head->next->next->next->next = new Node(-1);
	
	vector<int> v = LLvalues_to_vector_23(head);
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}
