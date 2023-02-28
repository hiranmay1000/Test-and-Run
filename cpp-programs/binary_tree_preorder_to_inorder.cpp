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

void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    cout << root->data << " ";
    postorder(root->right);
}

Node* constructTree(vector<int> arr, int n, int& i) {
    if (i >= n or arr[i] == -1) {
        i++;
        return NULL;
    }

    Node* root = new Node(arr[i]);
    i++;
    root->left = constructTree(arr, n, i);
    root->right = constructTree(arr, n, i);

    return root;
}





int main()
{
    vector<int> arr = { 1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1 };
    int i = 0;
    Node* root = constructTree(arr, arr.size(), i);

    preorder(root);
    cout << "\t<- Preorder" << endl;
    inorder(root);
    cout << "\t<- Inorder" << endl;
    postorder(root);
    cout << "\t<- Postorder" << endl;


    

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