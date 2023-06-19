#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node* left, Node* right) : val(x), left(left), right(right) {}
};

Node* buildTree(vector<int> arr, int i) {
    if (arr[i] == -1 || i >= arr.size()) {
        return nullptr;
    }

    Node* newNode = new Node(arr[i]);
    newNode->left = buildTree(arr, 2 * i + 1);
    newNode->right = buildTree(arr, 2 * i + 2);

    return newNode;
}

void preorder(Node* root) {
    if (!root) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (!root) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}


int isBST(Node* root, long minval, long maxval) {
    if (!root) return 1;

    if (root->val <= minval || root->val >= maxval) return false;

    return isBST(root->left, minval, root->val) and isBST(root->right, root->val, maxval);
}


int main()

{
    vector<int> arr = { 8,3,11,2,9,10,12 };
    Node* tree = buildTree(arr, 0);

    preorder(tree);
    cout << endl;
    inorder(tree);
    cout << endl;
    postorder(tree);

    int ans = isBST(tree, LONG_MAX, LONG_MIN);
    cout << "\nCheck BST: " << ans << endl;

    return 0;
}