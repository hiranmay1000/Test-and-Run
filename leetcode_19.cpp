#include <bits/stdc++.h>
using namespace std;

auto start = chrono::steady_clock::now();
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if (n == 1 and head->next == NULL) { // if only one node is present in list
            head = NULL; // set to null
            return head;
        }

        int cnt = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            cnt++;
        }

        cnt -= n; // get the postion in reverse mode

        temp = head;
        int pos = 1;
        while (pos < cnt) {
            temp = temp->next; // reach that desired position
            pos++;
        }

        ListNode* newNode = NULL; // create empty node for memory free

        if (cnt == 0) { // if first element needs to be deleted
            newNode = head;
            head = head->next;
            delete newNode; // free memory
            return head;
        }

        newNode = temp->next;
        temp->next = temp->next->next;
        delete newNode; // free memory

        return head;
    }
};

int main(){
    Solution problem;
    int n = 1;
    ListNode * head = NULL;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> v;
    int i = 0;
    cout << "Enter values: ";
    for (; i < size; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << "Array: ";
    for(auto it: v){
        cout << it << " ";
    }

    i = 0;
    while(v.size() > i){
		ListNode* newNode = new ListNode(v[i]);
		if (head == NULL) {
			head = newNode;
		}
		head->next = newNode;
		i++;
    }

    cout << "\nLinkedList: ";
    ListNode* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    
    problem.removeNthFromEnd(head, n);
}

