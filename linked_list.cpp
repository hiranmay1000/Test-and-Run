#include <bits/stdc++.h>

using namespace std;

struct Node {

public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};




void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d); // create new node
    temp->next = head;
    head = temp;
}



void insertAtTail(Node* head, int d) {
    Node* newNode = new Node(d); // create new node

    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}




void insertAtPos(int pos, Node*& head, int d) {
    Node* newNode = new Node(d);

    Node* temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}



void deleteNode(Node*& head, Node*& tail, int pos) {
    int count = 1;

    Node* temp = head;
    while (count < pos - 1) {
        temp = temp->next;
        count++;
    }
}



void display(Node*& head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



int main() {
    Node* node1 = new Node(1);

    Node* head = node1;

    insertAtHead(head, 0);
    insertAtPos(3, head, 2);
    insertAtTail(head, 3);

    cout << "Before operation: " << endl;
    display(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << head->data << endl;
    cout << "After operation: " << endl;
    display(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << head->data << endl;
}