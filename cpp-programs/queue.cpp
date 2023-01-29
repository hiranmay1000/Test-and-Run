#include <bits/stdc++.h>
#define size 5

using namespace std;

int front = -1;
int back = -1;
int a[size];

void enqueue() {
    if (back == size) {
        cout << "Queue is full!" << endl;
    }
    else {
        int front = 0;
        cout << "Enter element: ";
        int x;
        cin >> x;

        a[back++] = x;
        cout << x << " is successfully inserted!" << endl;
    }
}

void dequeue() {
    if (front > back) {
        cout << "Queue is empty!" << endl;
    }
    else {
        cout << a[front] << " is deleted" << endl;
        front++;
    }
}

void display() {
    for (int i = front; i < back; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    system("clear");
    while (1) {
        cout << "----------------------------\n";
        cout << "1. Insert\n2. Delete\n3. Display\n0. Exit\n";
        cout << "----------------------------\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            system("clear");
            break;
        case 2:
            dequeue();
            system("clear");
            break;
        case 3:
            system("clear");
            display();
            break;
        case 0:
            exit(0);
            system("clear");
            break;
        default:
            cout << "Invalid option chosen! " << endl;
            break;
        }
    }
}
