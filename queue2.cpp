#include <bits/stdc++.h>
using namespace std;

class Queue {
    int data;
    int front = 0;
    int rear = 0;
    int arr[5];
public:
    void enqueue(int d) {
        this->data = d;
        if (rear == 5) {
            cout << d << " Cannot be inserted! Queue is full! *" << endl;
            return;
        }

        if (rear < 5) {
            cout << d << " is inserted at the back" << endl;
            arr[rear] = d;
            rear++;
        }
    }

    void dequeue() {
        if (front == rear) {
            cout << "Empty Queue!" << endl;
        }

        arr[front] = -1;
        front++;
        if (front == rear) {
            front = 0;
            rear = 0;
        }
    }

    void out() {
        if (front == rear)
            cout << "Empty Queue! " << endl;

        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(0);

    q.dequeue();
    q.dequeue();
    q.enqueue(12);

    q.out();
}