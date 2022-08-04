#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

node *insertBST(node *root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left, val);
    }else {
        root->right=insertBST(root->right, val);
    }

    return root;    
}

void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    node *root=NULL;
    root=insertBST(root, 5);
    root=insertBST(root, 2);
    root=insertBST(root, 4);
    root=insertBST(root, 6);
    root=insertBST(root, 1);
    root=insertBST(root, 8);
    root=insertBST(root, 7);

    inorder(root);
    cout << endl;
}