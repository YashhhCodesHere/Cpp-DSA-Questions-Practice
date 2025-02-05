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
    Balanced BST => BST with minimum possible height (Height difference between left and right subtree is at most 1)
    To prevent skewed BST, we can use AVL Tree or Red-Black Tree.
*/

TreeNode* buildFromSortedArray(vector<int>& arr, int start, int end){
    if(start > end){
        return nullptr;
    }

    int mid = start + (end - start) / 2;
    TreeNode* root = new TreeNode(arr[mid]);

    root->left = buildFromSortedArray(arr, start, mid-1);
    root->right = buildFromSortedArray(arr, mid+1, end);

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& arr){
    return buildFromSortedArray(arr, 0, arr.size()-1);
}

int main(){
    
    return 0;
}