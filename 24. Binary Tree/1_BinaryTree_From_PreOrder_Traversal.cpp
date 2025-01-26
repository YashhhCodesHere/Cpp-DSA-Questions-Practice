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

TreeNode* buildTree(vector<int> nodes){
    static int idx = -1;
    if(nodes[idx] == -1){
        return nullptr;
    }

    TreeNode* rootNode = new TreeNode(nodes[++idx]);
    rootNode -> left = buildTree(nodes); 
    rootNode -> right = buildTree(nodes); 

    return rootNode;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    buildTree(nodes);
    
    return 0;
}