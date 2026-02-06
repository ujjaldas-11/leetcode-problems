#include <iostream>

using namespace std;


class Node {
    public: 
        int data;
        Node *next;

    Node(int value) {
        this-> data = value;
        this->next = NULL;
    }
};

void insertAtBeg(Node* &head, int val) {
    Node *newnode = new Node(val);

    newnode->next = head;
    head = newnode;
}

Node *reverseList(Node *head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *newHead = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void printList(Node *head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" <<endl;
}


int main() {
    Node *head = NULL;

    insertAtBeg(head, 10);
    insertAtBeg(head, 20);
    insertAtBeg(head, 30);
    insertAtBeg(head, 40);
    insertAtBeg(head, 50);
    
    printList(head);
    head = reverseList(head);
    printList(head);


    return 0;
}
