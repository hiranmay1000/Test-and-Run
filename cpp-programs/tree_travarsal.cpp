#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& root, int i) {
    if (i >= root.size() || root[i] == -1) {
        return nullptr;
    }

    TreeNode* newNode = new TreeNode(root[i]);
    newNode->left = buildTree(root, 2 * i + 1);
    newNode->right = buildTree(root, 2 * i + 2);

    return newNode;
}

void inorder(TreeNode* tree) {
    if (tree == nullptr) return;

    inorder(tree->left);
    cout << tree->val << " ";
    inorder(tree->right);
}

void preorder(TreeNode* root) {
    if (root == nullptr) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int maxWidthOfTree(TreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }

    queue<pair<TreeNode*, long long int>> q;
    q.push({ tree, 0 });
    int maxWid = 1;

    while (!q.empty()) {
        int levelSize = q.size();
        int minPos = q.front().second;
        int first, last;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* newTreeNode = q.front().first;
            long long int currPos = q.front().second - minPos;

            q.pop();

            if(i == 0) first = currPos; 
            if(i == levelSize - 1) last = currPos; 

            if (newTreeNode->left) q.push({ newTreeNode->left, currPos * 2 + 1});
            if (newTreeNode->right) q.push({ newTreeNode->right, currPos * 2 + 2 });
        }

        maxWid = max(maxWid, last - first + 1);
    }

    return maxWid;
}


int main() {
    vector<int> root = { 1,3,2,5,-1,-1,9,6,-1,7 };

    TreeNode* tree = buildTree(root, 0);
    cout << "Inorder: \t";
    inorder(tree);
    cout << "\nPreorder: \t";
    preorder(tree);

    cout << "\nMax width of a binary tree is: " << maxWidthOfTree(tree) << endl;

    return 0;
}
