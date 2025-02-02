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


// Searching in Binary Tree -> O(n)
bool search(TreeNode* root, int key){
    if(!root){
        return false;
    }

    if(root->data == key){
        return true;
    }

    return search(root->left, key) || search(root->right, key);
}

int main(){
    
    return 0;
}