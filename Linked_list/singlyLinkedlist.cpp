#include <iostream>

using namespace std;

class Node {
	public: 
		int data;
		Node* next;
	
	Node(int value) {
		this->data = value;
		this->next = NULL;
	}
};


void insertNodeAtbeg(Node* &head, int val) {
	Node *newnode = new Node(val);
	newnode->next = head;
	head = newnode;
}

void insertAtEnd(Node* &head, int val) {
	Node *newnode = new Node(val);

	if(head == NULL) {
		head = newnode;
		newnode->next = NULL;
		return;
	}

	Node *temp = head;

	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newnode;
	newnode->next = NULL;
}
	

void insertAtAnyPos(Node* &head, int val, int pos) {
	Node *newnode = new Node(val);

	if(pos == 1) {
		insertNodeAtbeg(head, val);
		return;
	}

	int i = 1;
	Node *temp = head;

	while(i < pos-1 && temp->next != NULL) {
		temp = temp->next;
		i++;
	}

	newnode->next = temp->next;
	temp->next = newnode;
}

void printList(Node *head) {
	Node *temp = head;
		while(temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL\n"<< endl;
}

int main() {
	Node *head = NULL;

	insertNodeAtbeg(head, 10);
	insertAtEnd(head, 20);
	insertAtAnyPos(head, 30, 1);

	insertAtAnyPos(head, 50, 2);
	printList(head);
	return 0;
}
