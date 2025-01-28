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

int countTotalNodes(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftSubTree = countTotalNodes(root -> left);
    int rightSubTree = countTotalNodes(root -> right);

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