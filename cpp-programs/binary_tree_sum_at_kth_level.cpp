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

Node* constructTree(vector<int> arr, int n, int& i) {
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

void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int sumAtLevelK(Node* root, int k) {
    if (root == NULL) return -1;

    int count = 0, sum = 0, totalNodes = 0;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* newNode = q.front();                                  // 6 9
                                                                    // 5 6
        q.pop();

        if (newNode != NULL) {
            cout << newNode->data << " ";
            totalNodes++;
            if (newNode->left) q.push(newNode->left);
            if (newNode->right) q.push(newNode->right);
            if (count == k) {
                sum += newNode->data;
            }
        }
        else if (!q.empty()) {
            q.push(NULL);
            cout << "NULL" << endl;
            count++;
        }
    }
    cout << "\nTotal node: " << totalNodes << endl;
    return sum;
}

int main()
{
    vector<int> arr = { 5,6,9,-1,-1,1,2,3,-1,-1,5,-1,-1,-1,3,2,-1,6,-1,7,-1,-1,1 };
    int i = 0;
    Node* root = constructTree(arr, arr.size(), i);
    // 5,6,9,1,2,3,5,3,2,6,7,1   <- Preorder


    int k = 3;
    cout << "\n\nSum at level " << k << " is: " << sumAtLevelK(root, k) << endl;

    preorder(root);
    cout << "<- Preorder" << endl;



    /* TREE

             1
           /   \
          2     3
         / \   / \
        4   5 6   7


    // 1 2 4 5 3 6 7 <- preorder
    // 4 2 5 1 6 3 7 <- inorder
    // 4 5 2 6 7 3 1 <- postorder

    */

    return 0;
}