#include <bits/stdc++.h>
using namespace std;

/*
    While Deleting a Node in BST, we've 3 cases:-
    1. Leaf Node -> Just Delete it.
    2. Node with 1 Child -> Replace it with its Child.
    3. Node with 2 Child -> Replace it with its INORDER SUCCESSOR.
        and, Inorder Successor always either have 0 or 1 (Right) Child.
        INORDER SUCCESSOR: Must be the Leftmost Node of Right Subtree of that node. => LeftMost Node means the first node with NO LEFT CHILD.
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

// Function to find the inorder successor (leftmost node in the right subtree)
TreeNode* inorderSuccessor(TreeNode* root) {
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
TreeNode* deleteNode(TreeNode* root, int val) {
    if (!root) {
        return nullptr;
    }

    if (val < root->data) {
        // Search in the left subtree
        root->left = deleteNode(root->left, val);
    } else if (val > root->data) {
        // Search in the right subtree
        root->right = deleteNode(root->right, val);
    } else {
        // Node to be deleted found
        // Case 1: No children
        if (!root->left && !root->right) {
            delete root;
            return nullptr;
        }

        // Case 2: One child
        if (!root->left || !root->right) {
            TreeNode* child = root->left ? root->left : root->right;
            delete root;  // Free the memory of the current node
            return child;
        }

        // Case 3: Two children -> Find Inorder Successor
        TreeNode* IS = inorderSuccessor(root->right);
        root->data = IS->data;  // Copy inorder successor's value
        root->right = deleteNode(root->right, IS->data);  // Delete the inorder successor
    }
    return root;
}

int main(){
    
    return 0;
}