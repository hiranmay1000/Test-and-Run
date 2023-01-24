#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* newNode = new ListNode(INT_MAX);
        vector <ListNode*> st = { newNode };

        while (head)
        {
            while(!st.empty() and head->val < st.back()->val){
                
            }
        }
        
    }
    //___________________________________________________________

    // Insert element for test cases
    void insertAtTail(ListNode*& head, int d) {
        ListNode* newNode = new ListNode(d);

        if (head == NULL) {
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Print original linkedList
    void out(ListNode*& head) {
        ListNode* temp = head;

        while (temp != NULL) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Solution problem;
    ListNode* head = NULL;
    problem.insertAtTail(head, 5);
    problem.insertAtTail(head, 2);
    problem.insertAtTail(head, 13);
    problem.insertAtTail(head, 3);
    problem.insertAtTail(head, 8);
    problem.insertAtTail(head, 22);
    problem.insertAtTail(head, 7);
    problem.insertAtTail(head, 11);
    problem.insertAtTail(head, 1);
    problem.insertAtTail(head, 2);
    problem.insertAtTail(head, 3);

    // problem.insertAtTail(head, 1);
    // problem.insertAtTail(head, 1);
    // problem.insertAtTail(head, 1);
    // problem.insertAtTail(head, 1);
    // problem.insertAtTail(head, 1);

    problem.out(head);

    ListNode* myans = problem.removeNodes(head);

    cout << endl << "LinkedList ans: ";
    while (myans != NULL)
    {
        cout << myans->val << " ";
        myans = myans->next;
    }
    cout << "NULL" << endl;

}