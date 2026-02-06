#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int value) {
        this-> data = value;
        this-> next = NULL;
    }
};

class MyLinkedList {
private:
    Node *head;
public:
    MyLinkedList( ) {
        head = NULL;
    }
    
    int get(int index) {
        Node *temp = head;
        int i = 0;
        while(i < index && temp != NULL) {
            temp = temp->next;
            i++;
        }

        if(temp == NULL) return -1;

        return temp->data;
    }
    
    void addAtHead(int val) {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }
    
    void addAtTail(int val) {
        Node *newnode = new Node(val);
        if(head == NULL) {
            head = newnode;
            return;
        }

        Node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }
    
    void addAtIndex(int index, int val) {
        Node *newnode = new Node(val);

        if(index < 0) return;

        if(index == 0) {
            addAtHead(val);
            return;
        }

        int i = 0;
        Node *temp = head;

        while(i < index - 1 && temp != NULL) {
        temp = temp->next;
        i++;
        }

        if(temp == NULL) return;

        newnode->next = temp->next;
        temp->next = newnode;

    }
    
    void deleteAtIndex(int index) {
        if(head == NULL) {
            return;
        }

        if(index == 0) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        int i = 0;
        while(i < index - 1 && temp->next != NULL) {
            temp = temp->next;
            i++;
        }
        if(temp-> next == NULL) return;

        Node *del = temp->next;
        temp->next = del->next;
        delete del;
    }
};

