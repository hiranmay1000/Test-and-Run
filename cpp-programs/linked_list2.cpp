#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};

class Solution {
public:

    ListNode* addedNum(int& sum) {
        ListNode* head = NULL;
        ListNode* newNode = NULL;

        if (head == NULL) {
            newNode = new ListNode(sum % 10);
            sum /= 10;
            head = newNode;
        }

        while (sum != 0) {
            newNode = new ListNode(sum % 10);
            sum /= 10;
            head->next = newNode;
        }


    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n = 0;
        int m = 0;

        ListNode* temp = l1;
        while (temp->next != NULL) {
            n = (n * 10) + temp->val;
            temp = temp->next;
        }

        ListNode* temp2 = l2;
        while (temp2->next != NULL) {
            m = (m * 10) + temp->val;
            temp2 = temp2->next;
        }

        int i;
        int revn = 0;
        for (i = 0; n != 0; i++) {
            revn = (revn * 10) + (n % 10);
            n /= 10;
        }

        int revm = 0;
        for (i = 0; m != 0; i++) {
            revm = (revm * 10) + (m % 10);
            m /= 10;
        }

    }
};

void printList(ListNode*& head) {
    ListNode* temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "NULL";
}


int main() {
    Solution problem;
    ListNode* l1 = NULL;
    ListNode* l2 = NULL;
    
    problem.addTwoNumbers(l1, l2);

}