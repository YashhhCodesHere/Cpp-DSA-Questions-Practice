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

int countNodes(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftSubTree = countNodes(root -> left);
    int rightSubTree = countNodes(root -> right);

    return leftSubTree + rightSubTree + 1;
}

int sumOfNodes(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftSubTree = sumOfNodes(root -> left);
    int rightSubTree = sumOfNodes(root -> right);

    return root -> data + leftSubTree + rightSubTree;
}

int main(){
    
    return 0;
}