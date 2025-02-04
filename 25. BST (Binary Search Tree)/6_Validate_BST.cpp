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

/*
    For Valid BST:-
    1. Left subtree should be less than root node.
    2. Right subtree should be greater than root node.
    3. [ Max Value of Left Subtree < Root Node < Min Value of Right Subtree ] -> Condition for Valid BST.
    So, 
       we've to check:-
       root <= minNode || root >= maxNode -> return false
    where;
            left subtree: root->left, minNode, root
            right subtree: root->right, root, maxNode

*/

bool validateHelper(TreeNode* root, TreeNode* minNode, TreeNode* maxNode){
    if(!root){
        return true;
    }

    // For any node if it's value is less than minNode or greater than maxNode then it's not a valid BST.
    if((minNode && root->data <= minNode->data) || (maxNode && root->data >= maxNode->data)){ 
        return false;
    }

    return validateHelper(root->left, minNode, root) && validateHelper(root->right, root, maxNode);
}

bool isValidBST(TreeNode* root){
    return validateHelper(root, nullptr, nullptr);
}

int main(){
    
    return 0;
}