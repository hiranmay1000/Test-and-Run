#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    // ~Node() {
    //     int val = this->data;
    //     if (this->next != NULL) {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << val << " is deleted!" << endl;
    // }
};

void insertAtHead(Node*& head, int d) {
    Node* newNode = new Node(d);

    if (head == NULL) {
        head = newNode;
        return;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node*& head, int d) {
    Node* newNode = new Node(d);

    if (head == NULL) {
        head = newNode;
        return;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPos(int pos, Node*& head, int d) {
    Node* newNode = new Node(d);

    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while (cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL) {
        insertAtTail(head, d);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}



void deleteNode(int pos, Node*& head) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;

        delete temp;
    }
    else {
        Node* currNode = head;
        Node* prevNode = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prevNode = currNode;
            currNode = currNode->next;
            cnt++;
        }

        prevNode->next = currNode->next;
        currNode->next = NULL;

        delete currNode;
    }
}



void show(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void displayLinkedPosition(Node*& head, Node*& tail) {
    Node* temp = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    cout << "Head: " << temp->data << endl;
    cout << "Tail: " << tail->data << endl;
}

int main() {

    Node* node1 = new Node(1);
    Node* head = node1;

    while (1) {
        cout << "1. Insert at head\n2. Insert at tail\n3. Insert at position\n4. Delete element\n5. Display\n0. Exit\n::";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            int x;
            cout << "Enter element: ";
            cin >> x;
            insertAtHead(head, x);
            show(head);
            break;
        case 2:
            int y;
            cout << "Enter element: ";
            cin >> y;
            insertAtTail(head, y);
            show(head);
            break;
        case 3:
            int z;
            cout << "Enter position: ";
            cin >> z;
            cout << "Enter data: ";
            int p;
            cin >> p;
            insertAtPos(z, head, p);
            show(head);
            break;
        case 4:
            int q;
            cout << "Enter position: ";
            cin >> q;
            deleteNode(q, head);
            show(head);
            break;
        case 5:
            show(head);
            break;
        case 0:
            displayLinkedPosition(head, head);
            exit(0);
            break;
        default:
            cout << "Invalid choice!!!" << endl;
            break;
        }
    }

    return 0;
}