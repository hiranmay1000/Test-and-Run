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

Node* constructTree(vector<int> arr, int& i) {
    if (i >= arr.size() or arr[i] == -1) {
        i++;
        return NULL;
    }

    // Create new Node
    Node* newNode = new Node(arr[i]);
    i++;
    newNode->left = constructTree(arr, i);
    newNode->right = constructTree(arr, i);

    return newNode;
}

int printLevelOrder(Node* root) {
    if (root == NULL) return 0;
    vector<vector<int>> ans;

    int count = 0;

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp(size);

        for (int i = 0; i < size; i++)
        {
            Node* newNode = q.front();
            q.pop();

            int index = (!leftToRight) ? size - i - 1 : i;
            temp[index] = newNode->data;

            if (newNode->left) q.push(newNode->left);
            if (newNode->right) q.push(newNode->right);
        }
        leftToRight = !leftToRight;
        ans.push_back(temp);
        count++;
    }

    cout << endl << endl;
    for (size_t i = 0; i < ans.size(); i++)
    {
        for (size_t j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    return count;
}

int main()
{
    vector<int> arr = { 3,9,20,-1,-1,15,7 };
    int i = 0;
    Node* root = constructTree(arr, i);

    cout << "\nTotal level: " << printLevelOrder(root) << endl;

    return 0;
}