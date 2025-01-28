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
//Helper function:-
int heightOfBT(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftHeight = heightOfBT(root -> left);
    int rightHeight = heightOfBT(root -> right);

    return max(leftHeight, rightHeight) + 1;
}

int diameter(TreeNode* root){   // O(n^2) Approach
    if(!root){
        return 0;
    }

    int currDiameter = heightOfBT(root -> left) + heightOfBT(root -> right);
    int leftDiameter = diameter(root -> left);
    int rightDiameter = diameter(root -> right);

    return max(currDiameter, max(leftDiameter, rightDiameter));
}

//Optimised Approach:-
static int maxDiameter = 0;

int helperHeight(TreeNode* root){
    if(!root){
        return 0;
    }

    int leftHeight = heightOfBT(root -> left);
    int rightHeight = heightOfBT(root -> right);
    maxDiameter = max(maxDiameter, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) + 1;
}

int diameterOptimised(TreeNode* root){  // O(n) Approach
    helperHeight(root);
    return maxDiameter;
}

int main(){
    
    return 0;
}