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

void printPath(vector<int> result){
    cout << "Path: ";
    for(auto i : result){
        cout << i << " ";
    }
    cout << "\n";
}

void helperPath(TreeNode* root, vector<int>& result){
    if(!root){
        return;
    }

    result.push_back(root->data);

    if(!root->left && !root->right){
        printPath(result);
        result.pop_back();
        return;
    }

    helperPath(root->left, result);
    helperPath(root->right, result);
    
    result.pop_back();  // BackTrack
}

vector<int> path(TreeNode* root){
    vector<int> result;
    helperPath(root, result);
    return result;
}

int main(){
    
    return 0;
}