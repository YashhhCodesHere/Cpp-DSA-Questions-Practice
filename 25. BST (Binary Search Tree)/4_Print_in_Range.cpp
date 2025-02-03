#include <bits/stdc++.h>
using namespace std;

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

#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void printInRange(TreeNode* root, int low, int high) {
    // Base case: If the current node is null, return
    if (!root) {
        return;
    }

    // If the current node's value is within the range, print it
    if (root->data >= low && root->data <= high) {
        // Traverse the left subtree for smaller values within range
        printInRange(root->left, low, high);
        // Print the current node's value
        cout << root->data << " ";
        // Traverse the right subtree for larger values within range
        printInRange(root->right, low, high);
    }
    // If the current node's value is less than the low bound,
    // skip the left subtree and check the right subtree
    else if (root->data < low) {
        printInRange(root->right, low, high);
    }
    // If the current node's value is greater than the high bound,
    // skip the right subtree and check the left subtree
    else {
        printInRange(root->left, low, high);
    }
}


int main(){
    
    return 0;
}