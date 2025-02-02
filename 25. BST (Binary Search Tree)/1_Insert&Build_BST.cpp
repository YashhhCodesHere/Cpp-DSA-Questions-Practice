#include <bits/stdc++.h>
using namespace std;

/*
    Binary Search Tree (BST) is a form of Binary Tree, Mostly used for searching.
    Property of BST:-
    1. Left Subtree < Parent Node < Right Subtree (For all nodes) 
    2. No Duplicates allowed (Nodes with same value are not allowed)
    3. Inorder Traversal of BST gives sorted order of elements.         (VVI)
    
    Time Complexity of Searching:-
    1. Average Case: O(logn) -> Height of BST
    2. Worst Case: O(n) -> Skewed BST
*/

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, int val){
    if(!root){
        return (new TreeNode(val));
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }else if(val > root->data){
        root->right = insert(root->right, val);
    }
    return root;
}

TreeNode* buildBST(vector<int> arr){
    TreeNode* root = nullptr;

    for(int i=0; i<arr.size(); i++){
        root = insert(root, arr[i]);
    }

    return root;
}

int main(){
    vector<int> values = {10, 5, 15, 3, 7, 12, 18};
    TreeNode* root = buildBST(values);

    return 0;
}