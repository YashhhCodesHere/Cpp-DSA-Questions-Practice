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

int heightOfBT(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftHeight = heightOfBT(root -> left);
    int rightHeight = heightOfBT(root -> right);

    return max(leftHeight, rightHeight) + 1;
}

int main(){
    
    return 0;
}