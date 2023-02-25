#include <iostream>

using namespace std;
class Node
{
public:
    string bkn, bkc;
    Node* next;
    Node()
    {
        bkn = " ";
        bkc = " ";
        next = NULL;
    }
};
class Bookstore
{
    Node* head;
public:
    Bookstore()
    {
        head = NULL;
    }
    void addBk()
    {
        string b, c;
        Node* tmp = new Node();
        cout << "Enter Book name" << endl;
        cin >> b;
        cout << "Enter book category" << endl;
        cin >> c;
        tmp->bkn = b;
        tmp->bkc = c;
        tmp->next = head;
        head = tmp;
    }
    void searchBK()
    {
        string b, c;
        int f = 0;
        cout << "Enter the book name you want to search" << endl;
        cin >> b;
        cout << "Enter the book category you want to search" << endl;
        cin >> c;
        Node* current = new Node();
        current = head;
        while (current != NULL)
        {
            if (current->bkn == b && current->bkc == c)
            {
                f = 1;
                cout << "Book Bought" << endl;
            }
            if (f == 1)
            {
                deleteBk(b, c);
                break;
            }
            else
            {
                cout << "Book Sold" << endl;
                break;
            }
            f = f * 0;
            current = current->next;
        }
    }
    void deleteBk(string b, string c)
    {
        Node* tmp = head;
        Node* prev = NULL;
        if (tmp != NULL && tmp->bkn == b && tmp->bkc == c)
        {
            head = tmp->next;
            delete tmp;
        }
        else
        {
            while (tmp != NULL && tmp->bkn == b && tmp->bkc == c)
            {
                prev = tmp;
                tmp = tmp->next;
            }
            if (tmp == NULL)
                return;
            prev->next = tmp->next;
            delete tmp;
        }
    }
    void print()
    {
        Node* tmp = head;
        if (head == NULL)
        {
            cout << "Update Books" << endl;
            return;
        }
        cout << "Books\tCategory" << endl;
        while (tmp != NULL)
        {
            cout << tmp->bkn << "\t" << tmp->bkc << endl;
            tmp = tmp->next;
        }
    }
};
int main()
{
    Bookstore b;
    int choice, f;
    while (f != 1)
    {
        cout << "1.Add Books\n2.Show Available Books\n3.Buy Book\n4.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            b.addBk();
            break;
        case 2:
            b.print();
            break;
        case 3:
            b.searchBK();
            break;
        case 4:
            f = 1;
            cout << "Thank You for purchasing ^^" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
        }
    }
}