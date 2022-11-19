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









void insertAtTail(Node* tail, int d) {
    Node* temp = new Node(d); // create new node
    tail->next = temp;
    tail = temp;
}





void deleteNode(Node*& head, Node*& tail, int pos){
    int count = 1;

    Node* temp = head;
    while(count < pos - 1){
        temp = temp->next;
        count++;
    }

    Node *currNode = ;

    temp->next = 
}






void insertAtPos(Node*& tail, Node*& head, int pos, int d) {

    //insert at 1
    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }



    Node* temp = head;
    int count = 1;

    while (count < pos - 1) { // traverse linked->List
        temp = temp->next;
        count++;
    }



    // insert at tail
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }




    // create node for d
    Node* nodeToInsert = new Node(d);

    //insert at middle (any)
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}





void display(Node*& head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}










int main() {
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    system("clear");
    cout << "Before: ";
    display(head);

    insertAtHead(head, 5);
    insertAtTail(tail, 20);
    insertAtPos(tail, head, 3, 15);
    deleteNode(tail, head, 3);

    cout << "After: ";
    display(head);
}