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

// Level Order Binary Tree formation:-
TreeNode* insertNode(TreeNode* root, int val){
    if(!root){
        return (new TreeNode(val));
    }
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        // Try inserting in the left child:-
        if(temp->left == nullptr){
            temp->left = new TreeNode(val);
            break;
        }else{
            q.push(temp->left);
        }

        if(temp->right == nullptr){
            temp->right = new TreeNode(val);
        }else{
            q.push(temp->right);
        }
    }
    return root;
}

int main(){
    TreeNode* root = nullptr;

    // Insert nodes in the binary tree
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 30);
    root = insertNode(root, 40);
    root = insertNode(root, 50);
    
    return 0;
}