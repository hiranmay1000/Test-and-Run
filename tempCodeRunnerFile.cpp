 head, Node*& tail) {
    Node* temp = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    cout << "Head: " << temp->data << endl;
    cout << "Tail: " << tail->data << endl;
}