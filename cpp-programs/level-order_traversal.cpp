#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construcTree(vector<int> arr, int n, int& i) {
    if (i >= n or arr[i] == -1) {
        i++;
        return NULL;
    }

    // Create new Node
    Node* root = new Node(arr[i]);
    i++;
    root->left = constructTree(arr, n, i);
    root->right = constructTree(arr, n, i);

    return root;
}

void printLevelOrder(Node* root) {
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root->data);
    q.push(NULL);
    
    while (/* condition */)
    {
        /* code */
    }
    
}

int main()
{
    vector<int> arr = { 1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1 };
    int i = 0;
    Node* root = constructTree(arr, arr.size(), i);

    // cout << "Total level: " << printLevelOrder(root) << endl;
    printLevelOrder(root);

    return 0;
}