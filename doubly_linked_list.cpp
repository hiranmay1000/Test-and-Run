#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};



void insertAtHead(Node*& head, int d) {

    if (head == NULL) {
        Node* newNode = new Node(d);
        head = newNode;
    }
    else {
        Node* newNode = new Node(d);

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}



void insertAtTail(Node*& tail, int d) {
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
    }
    else {
        Node* newNode = new Node(d);

        tail->next = newNode;
        newNode->prev = tail;
    }
}



void insertAtPos(int pos, Node*& head, int d) {

    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* newNode = new Node(d);

    Node* temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next = NULL) {
        insertAtTail(head, d);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}



void deleteNode(int pos, Node*& head) {

    if (pos == 1) {
        Node *temp = head;
        temp->next->prev = NULL;
        head = head->next;
        head->prev = NULL;
        
        delete temp;
    }
    else {
        Node* currNode = head;
        Node* prevNode = NULL;

        int cnt = 1;
        while (cnt < pos) {
            prevNode = currNode;
            currNode = currNode->next;
            cnt++;
        }

        currNode->prev = NULL;
        prevNode->next = currNode->next;
        currNode->next = NULL;

        delete currNode;
    }
}



void display(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



int main() {
    Node* Node1 = new Node(1);
    Node* head = Node1;
    Node* tail = Node1;

    insertAtHead(head, 0);
    insertAtPos(3, head, 2);
    insertAtTail(tail, 3);

    cout << "Before operation: " << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    // deleteNode(3, head);
    display(head);
    cout << "After operation: " << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
}